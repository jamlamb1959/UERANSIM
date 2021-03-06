/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_RRCSetupRequest extends RRC_Sequence {

    public RRC_RRCSetupRequest_IEs rrcSetupRequest;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "rrcSetupRequest" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "rrcSetupRequest" };
    }

    @Override
    public String getAsnName() {
        return "RRCSetupRequest";
    }

    @Override
    public String getXmlTagName() {
        return "RRCSetupRequest";
    }

}
