/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Choice;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_SCGFailureInformationEUTRA_IEs;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_SCGFailureInformationEUTRA__criticalExtensions__criticalExtensionsFuture;

public class RRC_SCGFailureInformationEUTRA__criticalExtensions extends RRC_Choice {

    public RRC_SCGFailureInformationEUTRA_IEs scgFailureInformationEUTRA;
    public RRC_SCGFailureInformationEUTRA__criticalExtensions__criticalExtensionsFuture criticalExtensionsFuture;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "scgFailureInformationEUTRA","criticalExtensionsFuture" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "scgFailureInformationEUTRA","criticalExtensionsFuture" };
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
