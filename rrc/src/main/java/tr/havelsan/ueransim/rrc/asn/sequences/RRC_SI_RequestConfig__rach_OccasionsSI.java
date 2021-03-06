/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_SI_RequestConfig__rach_OccasionsSI extends RRC_Sequence {

    public RRC_RACH_ConfigGeneric rach_ConfigSI;
    public RRC_Integer ssb_perRACH_Occasion;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "rach-ConfigSI","ssb-perRACH-Occasion" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "rach_ConfigSI","ssb_perRACH_Occasion" };
    }

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

}
