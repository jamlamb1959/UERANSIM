/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_RA_Prioritization extends RRC_Sequence {

    public RRC_Integer powerRampingStepHighPriority;
    public RRC_Integer scalingFactorBI;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "powerRampingStepHighPriority","scalingFactorBI" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "powerRampingStepHighPriority","scalingFactorBI" };
    }

    @Override
    public String getAsnName() {
        return "RA-Prioritization";
    }

    @Override
    public String getXmlTagName() {
        return "RA-Prioritization";
    }

}
