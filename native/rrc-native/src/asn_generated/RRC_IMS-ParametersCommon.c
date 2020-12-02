/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_IMS-ParametersCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRC_voiceOverEUTRA_5GC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_voiceOverSCG_BearerEUTRA_5GC_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_voiceOverEUTRA_5GC_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_voiceOverEUTRA_5GC_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_voiceOverEUTRA_5GC_specs_2 = {
	asn_MAP_RRC_voiceOverEUTRA_5GC_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_voiceOverEUTRA_5GC_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_voiceOverEUTRA_5GC_2 = {
	"voiceOverEUTRA-5GC",
	"voiceOverEUTRA-5GC",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2,
	sizeof(asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2)
		/sizeof(asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2)
		/sizeof(asn_DEF_RRC_voiceOverEUTRA_5GC_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_voiceOverEUTRA_5GC_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_voiceOverEUTRA_5GC_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_voiceOverSCG_BearerEUTRA_5GC_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_voiceOverSCG_BearerEUTRA_5GC_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_voiceOverSCG_BearerEUTRA_5GC_specs_6 = {
	asn_MAP_RRC_voiceOverSCG_BearerEUTRA_5GC_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_voiceOverSCG_BearerEUTRA_5GC_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_6 = {
	"voiceOverSCG-BearerEUTRA-5GC",
	"voiceOverSCG-BearerEUTRA-5GC",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6,
	sizeof(asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6)
		/sizeof(asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6[0]) - 1, /* 1 */
	asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6,	/* Same as above */
	sizeof(asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6)
		/sizeof(asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_voiceOverSCG_BearerEUTRA_5GC_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_voiceOverSCG_BearerEUTRA_5GC_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_IMS_ParametersCommon__ext1, voiceOverSCG_BearerEUTRA_5GC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_voiceOverSCG_BearerEUTRA_5GC_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"voiceOverSCG-BearerEUTRA-5GC"
		},
};
static const int asn_MAP_RRC_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* voiceOverSCG-BearerEUTRA-5GC */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_5 = {
	sizeof(struct RRC_IMS_ParametersCommon__ext1),
	offsetof(struct RRC_IMS_ParametersCommon__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_5,
	sizeof(asn_DEF_RRC_ext1_tags_5)
		/sizeof(asn_DEF_RRC_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_5)
		/sizeof(asn_DEF_RRC_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_5,
	1,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_IMS_ParametersCommon_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRC_IMS_ParametersCommon, voiceOverEUTRA_5GC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_voiceOverEUTRA_5GC_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"voiceOverEUTRA-5GC"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_IMS_ParametersCommon, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_IMS_ParametersCommon_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRC_IMS_ParametersCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_IMS_ParametersCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* voiceOverEUTRA-5GC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_IMS_ParametersCommon_specs_1 = {
	sizeof(struct RRC_IMS_ParametersCommon),
	offsetof(struct RRC_IMS_ParametersCommon, _asn_ctx),
	asn_MAP_RRC_IMS_ParametersCommon_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_IMS_ParametersCommon_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_IMS_ParametersCommon = {
	"IMS-ParametersCommon",
	"IMS-ParametersCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_IMS_ParametersCommon_tags_1,
	sizeof(asn_DEF_RRC_IMS_ParametersCommon_tags_1)
		/sizeof(asn_DEF_RRC_IMS_ParametersCommon_tags_1[0]), /* 1 */
	asn_DEF_RRC_IMS_ParametersCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_IMS_ParametersCommon_tags_1)
		/sizeof(asn_DEF_RRC_IMS_ParametersCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_IMS_ParametersCommon_1,
	2,	/* Elements count */
	&asn_SPC_RRC_IMS_ParametersCommon_specs_1	/* Additional specs */
};

