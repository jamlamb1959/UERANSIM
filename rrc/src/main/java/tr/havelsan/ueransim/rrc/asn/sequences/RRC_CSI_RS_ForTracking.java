/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_CSI_RS_ForTracking extends RRC_Sequence {

    public RRC_Integer maxBurstLength;
    public RRC_Integer maxSimultaneousResourceSetsPerCC;
    public RRC_Integer maxConfiguredResourceSetsPerCC;
    public RRC_Integer maxConfiguredResourceSetsAllCC;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "maxBurstLength","maxSimultaneousResourceSetsPerCC","maxConfiguredResourceSetsPerCC","maxConfiguredResourceSetsAllCC" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "maxBurstLength","maxSimultaneousResourceSetsPerCC","maxConfiguredResourceSetsPerCC","maxConfiguredResourceSetsAllCC" };
    }

    @Override
    public String getAsnName() {
        return "CSI-RS-ForTracking";
    }

    @Override
    public String getXmlTagName() {
        return "CSI-RS-ForTracking";
    }

}
