package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_RATRestrictions extends NGAP_SequenceOf<NGAP_RATRestrictions_Item> {

    public NGAP_RATRestrictions() {
        super();
    }

    public NGAP_RATRestrictions(List<NGAP_RATRestrictions_Item> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "RATRestrictions";
    }

    @Override
    public String getXmlTagName() {
        return "RATRestrictions";
    }

    @Override
    public Class<NGAP_RATRestrictions_Item> getItemType() {
        return NGAP_RATRestrictions_Item.class;
    }
}