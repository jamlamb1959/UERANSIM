/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_Phy-ParametersFR1.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRC_pdcch_MonitoringSingleOccasion_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_scs_60kHz_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_pdsch_256QAM_FR1_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_pdsch_RE_MappingFR1_PerSymbol_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_pdsch_RE_MappingFR1_PerSlot_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_pdcch_MonitoringSingleOccasion_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_pdcch_MonitoringSingleOccasion_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_pdcch_MonitoringSingleOccasion_specs_2 = {
	asn_MAP_RRC_pdcch_MonitoringSingleOccasion_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_pdcch_MonitoringSingleOccasion_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_pdcch_MonitoringSingleOccasion_2 = {
	"pdcch-MonitoringSingleOccasion",
	"pdcch-MonitoringSingleOccasion",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2,
	sizeof(asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2)
		/sizeof(asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2)
		/sizeof(asn_DEF_RRC_pdcch_MonitoringSingleOccasion_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_pdcch_MonitoringSingleOccasion_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_pdcch_MonitoringSingleOccasion_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_scs_60kHz_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_scs_60kHz_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_scs_60kHz_specs_4 = {
	asn_MAP_RRC_scs_60kHz_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_scs_60kHz_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_scs_60kHz_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_scs_60kHz_4 = {
	"scs-60kHz",
	"scs-60kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_scs_60kHz_tags_4,
	sizeof(asn_DEF_RRC_scs_60kHz_tags_4)
		/sizeof(asn_DEF_RRC_scs_60kHz_tags_4[0]) - 1, /* 1 */
	asn_DEF_RRC_scs_60kHz_tags_4,	/* Same as above */
	sizeof(asn_DEF_RRC_scs_60kHz_tags_4)
		/sizeof(asn_DEF_RRC_scs_60kHz_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_scs_60kHz_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_scs_60kHz_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_pdsch_256QAM_FR1_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_pdsch_256QAM_FR1_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_pdsch_256QAM_FR1_specs_6 = {
	asn_MAP_RRC_pdsch_256QAM_FR1_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_pdsch_256QAM_FR1_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_pdsch_256QAM_FR1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_pdsch_256QAM_FR1_6 = {
	"pdsch-256QAM-FR1",
	"pdsch-256QAM-FR1",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_pdsch_256QAM_FR1_tags_6,
	sizeof(asn_DEF_RRC_pdsch_256QAM_FR1_tags_6)
		/sizeof(asn_DEF_RRC_pdsch_256QAM_FR1_tags_6[0]) - 1, /* 1 */
	asn_DEF_RRC_pdsch_256QAM_FR1_tags_6,	/* Same as above */
	sizeof(asn_DEF_RRC_pdsch_256QAM_FR1_tags_6)
		/sizeof(asn_DEF_RRC_pdsch_256QAM_FR1_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_pdsch_256QAM_FR1_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_pdsch_256QAM_FR1_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_pdsch_RE_MappingFR1_PerSymbol_value2enum_8[] = {
	{ 0,	3,	"n10" },
	{ 1,	3,	"n20" }
};
static const unsigned int asn_MAP_RRC_pdsch_RE_MappingFR1_PerSymbol_enum2value_8[] = {
	0,	/* n10(0) */
	1	/* n20(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_pdsch_RE_MappingFR1_PerSymbol_specs_8 = {
	asn_MAP_RRC_pdsch_RE_MappingFR1_PerSymbol_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_pdsch_RE_MappingFR1_PerSymbol_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_8 = {
	"pdsch-RE-MappingFR1-PerSymbol",
	"pdsch-RE-MappingFR1-PerSymbol",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8,
	sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8)
		/sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8[0]) - 1, /* 1 */
	asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8,	/* Same as above */
	sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8)
		/sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_pdsch_RE_MappingFR1_PerSymbol_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_pdsch_RE_MappingFR1_PerSymbol_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_pdsch_RE_MappingFR1_PerSlot_value2enum_13[] = {
	{ 0,	3,	"n16" },
	{ 1,	3,	"n32" },
	{ 2,	3,	"n48" },
	{ 3,	3,	"n64" },
	{ 4,	3,	"n80" },
	{ 5,	3,	"n96" },
	{ 6,	4,	"n112" },
	{ 7,	4,	"n128" },
	{ 8,	4,	"n144" },
	{ 9,	4,	"n160" },
	{ 10,	4,	"n176" },
	{ 11,	4,	"n192" },
	{ 12,	4,	"n208" },
	{ 13,	4,	"n224" },
	{ 14,	4,	"n240" },
	{ 15,	4,	"n256" }
};
static const unsigned int asn_MAP_RRC_pdsch_RE_MappingFR1_PerSlot_enum2value_13[] = {
	6,	/* n112(6) */
	7,	/* n128(7) */
	8,	/* n144(8) */
	0,	/* n16(0) */
	9,	/* n160(9) */
	10,	/* n176(10) */
	11,	/* n192(11) */
	12,	/* n208(12) */
	13,	/* n224(13) */
	14,	/* n240(14) */
	15,	/* n256(15) */
	1,	/* n32(1) */
	2,	/* n48(2) */
	3,	/* n64(3) */
	4,	/* n80(4) */
	5	/* n96(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_pdsch_RE_MappingFR1_PerSlot_specs_13 = {
	asn_MAP_RRC_pdsch_RE_MappingFR1_PerSlot_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_pdsch_RE_MappingFR1_PerSlot_enum2value_13,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_13 = {
	"pdsch-RE-MappingFR1-PerSlot",
	"pdsch-RE-MappingFR1-PerSlot",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13,
	sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13)
		/sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13[0]) - 1, /* 1 */
	asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13,	/* Same as above */
	sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13)
		/sizeof(asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_pdsch_RE_MappingFR1_PerSlot_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_pdsch_RE_MappingFR1_PerSlot_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_ext1_12[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_Phy_ParametersFR1__ext1, pdsch_RE_MappingFR1_PerSlot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_pdsch_RE_MappingFR1_PerSlot_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingFR1-PerSlot"
		},
};
static const int asn_MAP_RRC_ext1_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pdsch-RE-MappingFR1-PerSlot */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_12 = {
	sizeof(struct RRC_Phy_ParametersFR1__ext1),
	offsetof(struct RRC_Phy_ParametersFR1__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_12 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_12,
	sizeof(asn_DEF_RRC_ext1_tags_12)
		/sizeof(asn_DEF_RRC_ext1_tags_12[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_12,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_12)
		/sizeof(asn_DEF_RRC_ext1_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_12,
	1,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_Phy_ParametersFR1_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRC_Phy_ParametersFR1, pdcch_MonitoringSingleOccasion),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_pdcch_MonitoringSingleOccasion_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-MonitoringSingleOccasion"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_Phy_ParametersFR1, scs_60kHz),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_scs_60kHz_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-60kHz"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_Phy_ParametersFR1, pdsch_256QAM_FR1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_pdsch_256QAM_FR1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-256QAM-FR1"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_Phy_ParametersFR1, pdsch_RE_MappingFR1_PerSymbol),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_pdsch_RE_MappingFR1_PerSymbol_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingFR1-PerSymbol"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_Phy_ParametersFR1, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_RRC_ext1_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_Phy_ParametersFR1_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRC_Phy_ParametersFR1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_Phy_ParametersFR1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcch-MonitoringSingleOccasion */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scs-60kHz */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdsch-256QAM-FR1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pdsch-RE-MappingFR1-PerSymbol */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_Phy_ParametersFR1_specs_1 = {
	sizeof(struct RRC_Phy_ParametersFR1),
	offsetof(struct RRC_Phy_ParametersFR1, _asn_ctx),
	asn_MAP_RRC_Phy_ParametersFR1_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRC_Phy_ParametersFR1_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_Phy_ParametersFR1 = {
	"Phy-ParametersFR1",
	"Phy-ParametersFR1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_Phy_ParametersFR1_tags_1,
	sizeof(asn_DEF_RRC_Phy_ParametersFR1_tags_1)
		/sizeof(asn_DEF_RRC_Phy_ParametersFR1_tags_1[0]), /* 1 */
	asn_DEF_RRC_Phy_ParametersFR1_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_Phy_ParametersFR1_tags_1)
		/sizeof(asn_DEF_RRC_Phy_ParametersFR1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_Phy_ParametersFR1_1,
	5,	/* Elements count */
	&asn_SPC_RRC_Phy_ParametersFR1_specs_1	/* Additional specs */
};

