/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_CFRA_SSB_Resource;

public class RRC_CFRA__resources__ssb__ssb_ResourceList extends RRC_SequenceOf<RRC_CFRA_SSB_Resource> {

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

    @Override
    public Class<RRC_CFRA_SSB_Resource> getItemType() {
        return RRC_CFRA_SSB_Resource.class;
    }

}
