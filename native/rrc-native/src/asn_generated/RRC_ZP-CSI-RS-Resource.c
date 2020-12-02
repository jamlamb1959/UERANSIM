/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_ZP-CSI-RS-Resource.h"

#include "RRC_CSI-ResourcePeriodicityAndOffset.h"
asn_TYPE_member_t asn_MBR_RRC_ZP_CSI_RS_Resource_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_ZP_CSI_RS_Resource, zp_CSI_RS_ResourceId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_ZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zp-CSI-RS-ResourceId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_ZP_CSI_RS_Resource, resourceMapping),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_CSI_RS_ResourceMapping,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceMapping"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_ZP_CSI_RS_Resource, periodicityAndOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_CSI_ResourcePeriodicityAndOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset"
		},
};
static const int asn_MAP_RRC_ZP_CSI_RS_Resource_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ZP_CSI_RS_Resource_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zp-CSI-RS-ResourceId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceMapping */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* periodicityAndOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_ZP_CSI_RS_Resource_specs_1 = {
	sizeof(struct RRC_ZP_CSI_RS_Resource),
	offsetof(struct RRC_ZP_CSI_RS_Resource, _asn_ctx),
	asn_MAP_RRC_ZP_CSI_RS_Resource_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_ZP_CSI_RS_Resource_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_ZP_CSI_RS_Resource = {
	"ZP-CSI-RS-Resource",
	"ZP-CSI-RS-Resource",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1,
	sizeof(asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1)
		/sizeof(asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1[0]), /* 1 */
	asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1)
		/sizeof(asn_DEF_RRC_ZP_CSI_RS_Resource_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ZP_CSI_RS_Resource_1,
	3,	/* Elements count */
	&asn_SPC_RRC_ZP_CSI_RS_Resource_specs_1	/* Additional specs */
};

