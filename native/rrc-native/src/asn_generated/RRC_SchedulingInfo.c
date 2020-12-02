/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_SchedulingInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRC_si_BroadcastStatus_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_si_Periodicity_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_si_BroadcastStatus_value2enum_2[] = {
	{ 0,	12,	"broadcasting" },
	{ 1,	15,	"notBroadcasting" }
};
static const unsigned int asn_MAP_RRC_si_BroadcastStatus_enum2value_2[] = {
	0,	/* broadcasting(0) */
	1	/* notBroadcasting(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_si_BroadcastStatus_specs_2 = {
	asn_MAP_RRC_si_BroadcastStatus_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_si_BroadcastStatus_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_si_BroadcastStatus_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_si_BroadcastStatus_2 = {
	"si-BroadcastStatus",
	"si-BroadcastStatus",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_si_BroadcastStatus_tags_2,
	sizeof(asn_DEF_RRC_si_BroadcastStatus_tags_2)
		/sizeof(asn_DEF_RRC_si_BroadcastStatus_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_si_BroadcastStatus_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_si_BroadcastStatus_tags_2)
		/sizeof(asn_DEF_RRC_si_BroadcastStatus_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_si_BroadcastStatus_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_si_BroadcastStatus_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_si_Periodicity_value2enum_5[] = {
	{ 0,	3,	"rf8" },
	{ 1,	4,	"rf16" },
	{ 2,	4,	"rf32" },
	{ 3,	4,	"rf64" },
	{ 4,	5,	"rf128" },
	{ 5,	5,	"rf256" },
	{ 6,	5,	"rf512" }
};
static const unsigned int asn_MAP_RRC_si_Periodicity_enum2value_5[] = {
	4,	/* rf128(4) */
	1,	/* rf16(1) */
	5,	/* rf256(5) */
	2,	/* rf32(2) */
	6,	/* rf512(6) */
	3,	/* rf64(3) */
	0	/* rf8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_si_Periodicity_specs_5 = {
	asn_MAP_RRC_si_Periodicity_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_si_Periodicity_enum2value_5,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_si_Periodicity_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_si_Periodicity_5 = {
	"si-Periodicity",
	"si-Periodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_si_Periodicity_tags_5,
	sizeof(asn_DEF_RRC_si_Periodicity_tags_5)
		/sizeof(asn_DEF_RRC_si_Periodicity_tags_5[0]) - 1, /* 1 */
	asn_DEF_RRC_si_Periodicity_tags_5,	/* Same as above */
	sizeof(asn_DEF_RRC_si_Periodicity_tags_5)
		/sizeof(asn_DEF_RRC_si_Periodicity_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_si_Periodicity_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_si_Periodicity_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_SchedulingInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SchedulingInfo, si_BroadcastStatus),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_si_BroadcastStatus_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-BroadcastStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SchedulingInfo, si_Periodicity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_si_Periodicity_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-Periodicity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SchedulingInfo, sib_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_SIB_Mapping,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-MappingInfo"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_SchedulingInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_SchedulingInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* si-BroadcastStatus */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* si-Periodicity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sib-MappingInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_SchedulingInfo_specs_1 = {
	sizeof(struct RRC_SchedulingInfo),
	offsetof(struct RRC_SchedulingInfo, _asn_ctx),
	asn_MAP_RRC_SchedulingInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_SchedulingInfo = {
	"SchedulingInfo",
	"SchedulingInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_SchedulingInfo_tags_1,
	sizeof(asn_DEF_RRC_SchedulingInfo_tags_1)
		/sizeof(asn_DEF_RRC_SchedulingInfo_tags_1[0]), /* 1 */
	asn_DEF_RRC_SchedulingInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_SchedulingInfo_tags_1)
		/sizeof(asn_DEF_RRC_SchedulingInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_SchedulingInfo_1,
	3,	/* Elements count */
	&asn_SPC_RRC_SchedulingInfo_specs_1	/* Additional specs */
};

