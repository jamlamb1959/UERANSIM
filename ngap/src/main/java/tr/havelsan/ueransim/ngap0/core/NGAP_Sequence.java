/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.core;

public abstract class NGAP_Sequence extends NGAP_Value {

    public abstract String[] getMemberNames();

    public abstract String[] getMemberIdentifiers();
}
