/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot extends RRC_Sequence {

    public RRC_Integer scs_15kHz;
    public RRC_Integer scs_30kHz;
    public RRC_Integer scs_60kHz;
    public RRC_Integer scs_120kHz;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "scs-15kHz","scs-30kHz","scs-60kHz","scs-120kHz" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "scs_15kHz","scs_30kHz","scs_60kHz","scs_120kHz" };
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
