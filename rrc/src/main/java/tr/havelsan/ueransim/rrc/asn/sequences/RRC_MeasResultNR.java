/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_PhysCellId;

public class RRC_MeasResultNR extends RRC_Sequence {

    public RRC_PhysCellId physCellId;
    public RRC_MeasResultNR__measResult measResult;
    public RRC_MeasResultNR__ext1 ext1;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "physCellId","measResult","ext1" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "physCellId","measResult","ext1" };
    }

    @Override
    public String getAsnName() {
        return "MeasResultNR";
    }

    @Override
    public String getXmlTagName() {
        return "MeasResultNR";
    }

}
