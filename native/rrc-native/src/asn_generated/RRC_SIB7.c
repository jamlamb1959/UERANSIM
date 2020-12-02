/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_SIB7.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_messageIdentifier_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_serialNumber_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_warningMessageSegmentNumber_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_dataCodingScheme_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_warningMessageSegmentType_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_messageIdentifier_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_serialNumber_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_warningMessageSegmentNumber_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_dataCodingScheme_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_warningMessageSegmentType_value2enum_4[] = {
	{ 0,	14,	"notLastSegment" },
	{ 1,	11,	"lastSegment" }
};
static const unsigned int asn_MAP_RRC_warningMessageSegmentType_enum2value_4[] = {
	1,	/* lastSegment(1) */
	0	/* notLastSegment(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_warningMessageSegmentType_specs_4 = {
	asn_MAP_RRC_warningMessageSegmentType_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_warningMessageSegmentType_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_warningMessageSegmentType_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_warningMessageSegmentType_4 = {
	"warningMessageSegmentType",
	"warningMessageSegmentType",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_warningMessageSegmentType_tags_4,
	sizeof(asn_DEF_RRC_warningMessageSegmentType_tags_4)
		/sizeof(asn_DEF_RRC_warningMessageSegmentType_tags_4[0]) - 1, /* 1 */
	asn_DEF_RRC_warningMessageSegmentType_tags_4,	/* Same as above */
	sizeof(asn_DEF_RRC_warningMessageSegmentType_tags_4)
		/sizeof(asn_DEF_RRC_warningMessageSegmentType_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_warningMessageSegmentType_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_warningMessageSegmentType_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_SIB7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SIB7, messageIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_messageIdentifier_constr_2,  memb_RRC_messageIdentifier_constraint_1 },
		0, 0, /* No default value */
		"messageIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SIB7, serialNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_serialNumber_constr_3,  memb_RRC_serialNumber_constraint_1 },
		0, 0, /* No default value */
		"serialNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SIB7, warningMessageSegmentType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_warningMessageSegmentType_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"warningMessageSegmentType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SIB7, warningMessageSegmentNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_warningMessageSegmentNumber_constr_7,  memb_RRC_warningMessageSegmentNumber_constraint_1 },
		0, 0, /* No default value */
		"warningMessageSegmentNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SIB7, warningMessageSegment),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"warningMessageSegment"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_SIB7, dataCodingScheme),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_dataCodingScheme_constr_9,  memb_RRC_dataCodingScheme_constraint_1 },
		0, 0, /* No default value */
		"dataCodingScheme"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_SIB7, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_RRC_SIB7_oms_1[] = { 5, 6 };
static const ber_tlv_tag_t asn_DEF_RRC_SIB7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_SIB7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* serialNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* warningMessageSegmentType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* warningMessageSegmentNumber */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* warningMessageSegment */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dataCodingScheme */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_SIB7_specs_1 = {
	sizeof(struct RRC_SIB7),
	offsetof(struct RRC_SIB7, _asn_ctx),
	asn_MAP_RRC_SIB7_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRC_SIB7_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_SIB7 = {
	"SIB7",
	"SIB7",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_SIB7_tags_1,
	sizeof(asn_DEF_RRC_SIB7_tags_1)
		/sizeof(asn_DEF_RRC_SIB7_tags_1[0]), /* 1 */
	asn_DEF_RRC_SIB7_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_SIB7_tags_1)
		/sizeof(asn_DEF_RRC_SIB7_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_SIB7_1,
	7,	/* Elements count */
	&asn_SPC_RRC_SIB7_specs_1	/* Additional specs */
};

