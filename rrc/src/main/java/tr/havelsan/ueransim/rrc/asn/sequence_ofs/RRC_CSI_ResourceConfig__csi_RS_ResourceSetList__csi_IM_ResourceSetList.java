/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_CSI_IM_ResourceSetId;

public class RRC_CSI_ResourceConfig__csi_RS_ResourceSetList__csi_IM_ResourceSetList extends RRC_SequenceOf<RRC_CSI_IM_ResourceSetId> {

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

    @Override
    public Class<RRC_CSI_IM_ResourceSetId> getItemType() {
        return RRC_CSI_IM_ResourceSetId.class;
    }

}
