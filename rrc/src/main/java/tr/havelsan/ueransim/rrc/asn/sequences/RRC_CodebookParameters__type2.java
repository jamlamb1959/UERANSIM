/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_CodebookParameters__type2__supportedCSI_RS_ResourceList;

public class RRC_CodebookParameters__type2 extends RRC_Sequence {

    public RRC_CodebookParameters__type2__supportedCSI_RS_ResourceList supportedCSI_RS_ResourceList;
    public RRC_Integer parameterLx;
    public RRC_Integer amplitudeScalingType;
    public RRC_Integer amplitudeSubsetRestriction;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "supportedCSI-RS-ResourceList","parameterLx","amplitudeScalingType","amplitudeSubsetRestriction" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "supportedCSI_RS_ResourceList","parameterLx","amplitudeScalingType","amplitudeSubsetRestriction" };
    }

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

}
