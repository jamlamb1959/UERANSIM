/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_CellAccessRelatedInfo_EUTRA_5GC;

public class RRC_CGI_InfoEUTRA__cgi_info_5GC extends RRC_SequenceOf<RRC_CellAccessRelatedInfo_EUTRA_5GC> {

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

    @Override
    public Class<RRC_CellAccessRelatedInfo_EUTRA_5GC> getItemType() {
        return RRC_CellAccessRelatedInfo_EUTRA_5GC.class;
    }

}
