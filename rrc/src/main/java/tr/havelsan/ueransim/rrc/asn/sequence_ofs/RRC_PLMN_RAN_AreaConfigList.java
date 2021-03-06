/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_PLMN_RAN_AreaConfig;

public class RRC_PLMN_RAN_AreaConfigList extends RRC_SequenceOf<RRC_PLMN_RAN_AreaConfig> {

    @Override
    public String getAsnName() {
        return "PLMN-RAN-AreaConfigList";
    }

    @Override
    public String getXmlTagName() {
        return "PLMN-RAN-AreaConfigList";
    }

    @Override
    public Class<RRC_PLMN_RAN_AreaConfig> getItemType() {
        return RRC_PLMN_RAN_AreaConfig.class;
    }

}
