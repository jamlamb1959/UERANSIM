/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Choice;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Null;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_MRDC_SecondaryCellGroupConfig;

public class RRC_SetupRelease_MRDC_SecondaryCellGroupConfig extends RRC_Choice {

    public RRC_Null release;
    public RRC_MRDC_SecondaryCellGroupConfig setup;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "release","setup" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "release","setup" };
    }

    @Override
    public String getAsnName() {
        return "SetupRelease_MRDC-SecondaryCellGroupConfig";
    }

    @Override
    public String getXmlTagName() {
        return "SetupRelease_MRDC-SecondaryCellGroupConfig";
    }

}
