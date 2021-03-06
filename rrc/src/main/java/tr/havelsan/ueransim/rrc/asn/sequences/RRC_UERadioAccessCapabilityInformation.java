/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.choices.RRC_UERadioAccessCapabilityInformation__criticalExtensions;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_UERadioAccessCapabilityInformation extends RRC_Sequence {

    public RRC_UERadioAccessCapabilityInformation__criticalExtensions criticalExtensions;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "criticalExtensions" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "criticalExtensions" };
    }

    @Override
    public String getAsnName() {
        return "UERadioAccessCapabilityInformation";
    }

    @Override
    public String getXmlTagName() {
        return "UERadioAccessCapabilityInformation";
    }

}
