/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_BandCombination_v1550;

public class RRC_BandCombinationList_v1550 extends RRC_SequenceOf<RRC_BandCombination_v1550> {

    @Override
    public String getAsnName() {
        return "BandCombinationList-v1550";
    }

    @Override
    public String getXmlTagName() {
        return "BandCombinationList-v1550";
    }

    @Override
    public Class<RRC_BandCombination_v1550> getItemType() {
        return RRC_BandCombination_v1550.class;
    }

}
