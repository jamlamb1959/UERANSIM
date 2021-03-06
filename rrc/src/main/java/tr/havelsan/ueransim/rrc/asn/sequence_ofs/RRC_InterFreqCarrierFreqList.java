/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_InterFreqCarrierFreqInfo;

public class RRC_InterFreqCarrierFreqList extends RRC_SequenceOf<RRC_InterFreqCarrierFreqInfo> {

    @Override
    public String getAsnName() {
        return "InterFreqCarrierFreqList";
    }

    @Override
    public String getXmlTagName() {
        return "InterFreqCarrierFreqList";
    }

    @Override
    public Class<RRC_InterFreqCarrierFreqInfo> getItemType() {
        return RRC_InterFreqCarrierFreqInfo.class;
    }

}
