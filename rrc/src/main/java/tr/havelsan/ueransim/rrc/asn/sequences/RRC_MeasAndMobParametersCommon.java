/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_BitString;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_MeasAndMobParametersCommon extends RRC_Sequence {

    public RRC_BitString supportedGapPattern;
    public RRC_Integer ssb_RLM;
    public RRC_Integer ssb_AndCSI_RS_RLM;
    public RRC_MeasAndMobParametersCommon__ext1 ext1;
    public RRC_MeasAndMobParametersCommon__ext2 ext2;
    public RRC_MeasAndMobParametersCommon__ext3 ext3;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "supportedGapPattern","ssb-RLM","ssb-AndCSI-RS-RLM","ext1","ext2","ext3" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "supportedGapPattern","ssb_RLM","ssb_AndCSI_RS_RLM","ext1","ext2","ext3" };
    }

    @Override
    public String getAsnName() {
        return "MeasAndMobParametersCommon";
    }

    @Override
    public String getXmlTagName() {
        return "MeasAndMobParametersCommon";
    }

}
