/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_PUSCH_TimeDomainResourceAllocation extends RRC_Sequence {

    public RRC_Integer k2;
    public RRC_Integer mappingType;
    public RRC_Integer startSymbolAndLength;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "k2","mappingType","startSymbolAndLength" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "k2","mappingType","startSymbolAndLength" };
    }

    @Override
    public String getAsnName() {
        return "PUSCH-TimeDomainResourceAllocation";
    }

    @Override
    public String getXmlTagName() {
        return "PUSCH-TimeDomainResourceAllocation";
    }

}
