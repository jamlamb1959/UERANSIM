/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_RRCResumeRequest1 extends RRC_Sequence {

    public RRC_RRCResumeRequest1_IEs rrcResumeRequest1;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "rrcResumeRequest1" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "rrcResumeRequest1" };
    }

    @Override
    public String getAsnName() {
        return "RRCResumeRequest1";
    }

    @Override
    public String getXmlTagName() {
        return "RRCResumeRequest1";
    }

}
