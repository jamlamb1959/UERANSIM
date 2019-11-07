package com.runsim.backend.utils;

import com.runsim.backend.utils.bits.Bit4;
import com.runsim.backend.utils.octets.Octet;
import com.runsim.backend.utils.octets.Octet2;
import com.runsim.backend.utils.octets.OctetString;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class OctetOutputStream {
    private final List<Octet> data;
    private final boolean isBigEndian;

    public OctetOutputStream() {
        this(true);
    }

    public OctetOutputStream(boolean isBigEndian) {
        this.data = new ArrayList<>();
        this.isBigEndian = isBigEndian;
    }

    public void writeOctet(int octet) {
        writeOctet(new Octet(octet));
    }

    public void writeOctet(Octet octet) {
        data.add(octet);
    }

    public void writeOctet(Bit4 bigHalf, Bit4 littleHalf) {
        writeOctet(bigHalf.intValue, littleHalf.intValue);
    }

    public void writeOctet(int bigHalf, int littleHalf) {
        bigHalf &= 0xF;
        littleHalf &= 0xF;
        writeOctet(bigHalf << 4 | littleHalf);
    }

    public void writeOctet2(Octet bigOctet, Octet littleOctet) {
        if (isBigEndian) {
            writeOctet(bigOctet);
            writeOctet(littleOctet);
        } else {
            writeOctet(littleOctet);
            writeOctet(bigOctet);
        }
    }

    public void writeOctet2(int bigOctet, int littleOctet) {
        if (isBigEndian) {
            writeOctet(bigOctet);
            writeOctet(littleOctet);
        } else {
            writeOctet(littleOctet);
            writeOctet(bigOctet);
        }
    }

    public void writeOctet2(Octet2 octet2) {
        if (isBigEndian) {
            writeOctet(octet2.intValue >> 8 & 0xFF);
            writeOctet(octet2.intValue & 0xFF);
        } else {
            writeOctet(octet2.intValue & 0xFF);
            writeOctet(octet2.intValue >> 8 & 0xFF);
        }
    }

    public void writeOctet2(int octet2) {
        writeOctet2(new Octet2(octet2));
    }

    public void writeStream(OctetOutputStream stream) {
        var data = stream.data;
        for (var octet : data) {
            writeOctet(octet);
        }
    }

    public void writeOctetString(OctetString octetString) {
        writeOctets(octetString.data);
    }

    public void writeOctets(Octet[] octets) {
        data.addAll(Arrays.asList(octets));
    }

    public void writeOctets(int[] octets) {
        for (int octet : octets) {
            writeOctet(octet & 0xFF);
        }
    }

    public Octet[] toOctetArray() {
        return data.toArray(new Octet[0]);
    }

    public byte[] toByteArray() {
        Octet[] arr = toOctetArray();
        byte[] buf = new byte[arr.length];
        for (int i = 0; i < arr.length; i++)
            buf[i] = (byte) arr[i].intValue;
        return buf;
    }

    public int length() {
        return data.size();
    }

}