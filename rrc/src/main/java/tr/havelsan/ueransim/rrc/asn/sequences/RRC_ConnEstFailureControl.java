/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_ConnEstFailureControl extends RRC_Sequence {

    public RRC_Integer connEstFailCount;
    public RRC_Integer connEstFailOffsetValidity;
    public RRC_Integer connEstFailOffset;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "connEstFailCount","connEstFailOffsetValidity","connEstFailOffset" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "connEstFailCount","connEstFailOffsetValidity","connEstFailOffset" };
    }

    @Override
    public String getAsnName() {
        return "ConnEstFailureControl";
    }

    @Override
    public String getXmlTagName() {
        return "ConnEstFailureControl";
    }

}
