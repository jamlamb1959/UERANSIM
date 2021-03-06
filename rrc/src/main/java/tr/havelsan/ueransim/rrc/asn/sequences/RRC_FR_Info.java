/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_ServCellIndex;

public class RRC_FR_Info extends RRC_Sequence {

    public RRC_ServCellIndex servCellIndex;
    public RRC_Integer fr_Type;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "servCellIndex","fr-Type" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "servCellIndex","fr_Type" };
    }

    @Override
    public String getAsnName() {
        return "FR-Info";
    }

    @Override
    public String getXmlTagName() {
        return "FR-Info";
    }

}
