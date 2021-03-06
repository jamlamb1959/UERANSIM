/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_EUTRA_NS_PmaxValue;

public class RRC_EUTRA_NS_PmaxList extends RRC_SequenceOf<RRC_EUTRA_NS_PmaxValue> {

    @Override
    public String getAsnName() {
        return "EUTRA-NS-PmaxList";
    }

    @Override
    public String getXmlTagName() {
        return "EUTRA-NS-PmaxList";
    }

    @Override
    public Class<RRC_EUTRA_NS_PmaxValue> getItemType() {
        return RRC_EUTRA_NS_PmaxValue.class;
    }

}
