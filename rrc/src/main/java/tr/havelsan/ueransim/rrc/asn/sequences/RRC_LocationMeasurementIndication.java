/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.choices.RRC_LocationMeasurementIndication__criticalExtensions;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_LocationMeasurementIndication extends RRC_Sequence {

    public RRC_LocationMeasurementIndication__criticalExtensions criticalExtensions;

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
        return "LocationMeasurementIndication";
    }

    @Override
    public String getXmlTagName() {
        return "LocationMeasurementIndication";
    }

}
