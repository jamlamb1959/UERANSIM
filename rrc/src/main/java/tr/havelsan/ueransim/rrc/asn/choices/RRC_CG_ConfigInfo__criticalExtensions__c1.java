/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Choice;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Null;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_CG_ConfigInfo_IEs;

public class RRC_CG_ConfigInfo__criticalExtensions__c1 extends RRC_Choice {

    public RRC_CG_ConfigInfo_IEs cg_ConfigInfo;
    public RRC_Null spare3;
    public RRC_Null spare2;
    public RRC_Null spare1;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "cg-ConfigInfo","spare3","spare2","spare1" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "cg_ConfigInfo","spare3","spare2","spare1" };
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
