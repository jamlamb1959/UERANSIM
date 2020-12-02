/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_EventTriggerConfig.h"

#include "RRC_MeasReportQuantity.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_maxReportCells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_RRC_maxNrofRS_IndexesToReport_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_eventId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_reportAmount_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_reportAddNeighMeas_constr_55 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_maxReportCells_constr_51 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_maxNrofRS_IndexesToReport_constr_53 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_eventA1_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA1, a1_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a1-Threshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA1, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA1, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA1, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a1-Threshold */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA1_specs_3 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA1),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA1, _asn_ctx),
	asn_MAP_RRC_eventA1_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA1_3 = {
	"eventA1",
	"eventA1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA1_tags_3,
	sizeof(asn_DEF_RRC_eventA1_tags_3)
		/sizeof(asn_DEF_RRC_eventA1_tags_3[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA1_tags_3,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA1_tags_3)
		/sizeof(asn_DEF_RRC_eventA1_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA1_3,
	4,	/* Elements count */
	&asn_SPC_RRC_eventA1_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventA2_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA2, a2_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a2-Threshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA2, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA2, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA2, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a2-Threshold */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA2_specs_8 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA2),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA2, _asn_ctx),
	asn_MAP_RRC_eventA2_tag2el_8,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA2_8 = {
	"eventA2",
	"eventA2",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA2_tags_8,
	sizeof(asn_DEF_RRC_eventA2_tags_8)
		/sizeof(asn_DEF_RRC_eventA2_tags_8[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA2_tags_8,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA2_tags_8)
		/sizeof(asn_DEF_RRC_eventA2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA2_8,
	4,	/* Elements count */
	&asn_SPC_RRC_eventA2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventA3_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, a3_Offset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantityOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a3-Offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, useWhiteCellList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useWhiteCellList"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA3_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA3_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a3-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* useWhiteCellList */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA3_specs_13 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA3),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA3, _asn_ctx),
	asn_MAP_RRC_eventA3_tag2el_13,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA3_13 = {
	"eventA3",
	"eventA3",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA3_tags_13,
	sizeof(asn_DEF_RRC_eventA3_tags_13)
		/sizeof(asn_DEF_RRC_eventA3_tags_13[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA3_tags_13,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA3_tags_13)
		/sizeof(asn_DEF_RRC_eventA3_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA3_13,
	5,	/* Elements count */
	&asn_SPC_RRC_eventA3_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventA4_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, a4_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a4-Threshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, useWhiteCellList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useWhiteCellList"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA4_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA4_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a4-Threshold */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* useWhiteCellList */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA4_specs_19 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA4),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA4, _asn_ctx),
	asn_MAP_RRC_eventA4_tag2el_19,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA4_19 = {
	"eventA4",
	"eventA4",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA4_tags_19,
	sizeof(asn_DEF_RRC_eventA4_tags_19)
		/sizeof(asn_DEF_RRC_eventA4_tags_19[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA4_tags_19,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA4_tags_19)
		/sizeof(asn_DEF_RRC_eventA4_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA4_19,
	5,	/* Elements count */
	&asn_SPC_RRC_eventA4_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventA5_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, a5_Threshold1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a5-Threshold1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, a5_Threshold2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a5-Threshold2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, useWhiteCellList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useWhiteCellList"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA5_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA5_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a5-Threshold1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* a5-Threshold2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* useWhiteCellList */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA5_specs_25 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA5),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA5, _asn_ctx),
	asn_MAP_RRC_eventA5_tag2el_25,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA5_25 = {
	"eventA5",
	"eventA5",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA5_tags_25,
	sizeof(asn_DEF_RRC_eventA5_tags_25)
		/sizeof(asn_DEF_RRC_eventA5_tags_25[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA5_tags_25,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA5_tags_25)
		/sizeof(asn_DEF_RRC_eventA5_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA5_25,
	6,	/* Elements count */
	&asn_SPC_RRC_eventA5_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventA6_32[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, a6_Offset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_MeasTriggerQuantityOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a6-Offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, useWhiteCellList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useWhiteCellList"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_eventA6_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventA6_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a6-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeToTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* useWhiteCellList */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_eventA6_specs_32 = {
	sizeof(struct RRC_EventTriggerConfig__eventId__eventA6),
	offsetof(struct RRC_EventTriggerConfig__eventId__eventA6, _asn_ctx),
	asn_MAP_RRC_eventA6_tag2el_32,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventA6_32 = {
	"eventA6",
	"eventA6",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_eventA6_tags_32,
	sizeof(asn_DEF_RRC_eventA6_tags_32)
		/sizeof(asn_DEF_RRC_eventA6_tags_32[0]) - 1, /* 1 */
	asn_DEF_RRC_eventA6_tags_32,	/* Same as above */
	sizeof(asn_DEF_RRC_eventA6_tags_32)
		/sizeof(asn_DEF_RRC_eventA6_tags_32[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_eventA6_32,
	5,	/* Elements count */
	&asn_SPC_RRC_eventA6_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_eventId_2[] = {
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_RRC_eventA1_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA1"
		},
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_eventA2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA2"
		},
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_RRC_eventA3_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA3"
		},
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_RRC_eventA4_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA4"
		},
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_RRC_eventA5_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA5"
		},
	{ ATF_POINTER, 0, offsetof(struct RRC_EventTriggerConfig__eventId, choice.eventA6),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_RRC_eventA6_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventA6"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_eventId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventA1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventA2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventA3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eventA4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eventA5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* eventA6 */
};
static asn_CHOICE_specifics_t asn_SPC_RRC_eventId_specs_2 = {
	sizeof(struct RRC_EventTriggerConfig__eventId),
	offsetof(struct RRC_EventTriggerConfig__eventId, _asn_ctx),
	offsetof(struct RRC_EventTriggerConfig__eventId, present),
	sizeof(((struct RRC_EventTriggerConfig__eventId *)0)->present),
	asn_MAP_RRC_eventId_tag2el_2,
	6,	/* Count of tags in the map */
	0, 0,
	6	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_eventId_2 = {
	"eventId",
	"eventId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RRC_eventId_constr_2, CHOICE_constraint },
	asn_MBR_RRC_eventId_2,
	6,	/* Elements count */
	&asn_SPC_RRC_eventId_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_reportAmount_value2enum_41[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_RRC_reportAmount_enum2value_41[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_reportAmount_specs_41 = {
	asn_MAP_RRC_reportAmount_value2enum_41,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_reportAmount_enum2value_41,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_reportAmount_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_reportAmount_41 = {
	"reportAmount",
	"reportAmount",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_reportAmount_tags_41,
	sizeof(asn_DEF_RRC_reportAmount_tags_41)
		/sizeof(asn_DEF_RRC_reportAmount_tags_41[0]) - 1, /* 1 */
	asn_DEF_RRC_reportAmount_tags_41,	/* Same as above */
	sizeof(asn_DEF_RRC_reportAmount_tags_41)
		/sizeof(asn_DEF_RRC_reportAmount_tags_41[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_reportAmount_constr_41, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_reportAmount_specs_41	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_reportAddNeighMeas_value2enum_55[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_RRC_reportAddNeighMeas_enum2value_55[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_reportAddNeighMeas_specs_55 = {
	asn_MAP_RRC_reportAddNeighMeas_value2enum_55,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_reportAddNeighMeas_enum2value_55,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_reportAddNeighMeas_tags_55[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_reportAddNeighMeas_55 = {
	"reportAddNeighMeas",
	"reportAddNeighMeas",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_reportAddNeighMeas_tags_55,
	sizeof(asn_DEF_RRC_reportAddNeighMeas_tags_55)
		/sizeof(asn_DEF_RRC_reportAddNeighMeas_tags_55[0]) - 1, /* 1 */
	asn_DEF_RRC_reportAddNeighMeas_tags_55,	/* Same as above */
	sizeof(asn_DEF_RRC_reportAddNeighMeas_tags_55)
		/sizeof(asn_DEF_RRC_reportAddNeighMeas_tags_55[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_reportAddNeighMeas_constr_55, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_reportAddNeighMeas_specs_55	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_EventTriggerConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, eventId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_eventId_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, rsType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_NR_RS_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, reportInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_ReportInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_reportAmount_41,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, reportQuantityCell),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MeasReportQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportQuantityCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, maxReportCells),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_maxReportCells_constr_51,  memb_RRC_maxReportCells_constraint_1 },
		0, 0, /* No default value */
		"maxReportCells"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_EventTriggerConfig, reportQuantityRS_Indexes),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MeasReportQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportQuantityRS-Indexes"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_EventTriggerConfig, maxNrofRS_IndexesToReport),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_maxNrofRS_IndexesToReport_constr_53,  memb_RRC_maxNrofRS_IndexesToReport_constraint_1 },
		0, 0, /* No default value */
		"maxNrofRS-IndexesToReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_EventTriggerConfig, includeBeamMeasurements),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"includeBeamMeasurements"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_EventTriggerConfig, reportAddNeighMeas),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_reportAddNeighMeas_55,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportAddNeighMeas"
		},
};
static const int asn_MAP_RRC_EventTriggerConfig_oms_1[] = { 6, 7, 9 };
static const ber_tlv_tag_t asn_DEF_RRC_EventTriggerConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_EventTriggerConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportInterval */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportAmount */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportQuantityCell */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxReportCells */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* reportQuantityRS-Indexes */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* maxNrofRS-IndexesToReport */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* includeBeamMeasurements */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* reportAddNeighMeas */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_EventTriggerConfig_specs_1 = {
	sizeof(struct RRC_EventTriggerConfig),
	offsetof(struct RRC_EventTriggerConfig, _asn_ctx),
	asn_MAP_RRC_EventTriggerConfig_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RRC_EventTriggerConfig_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_EventTriggerConfig = {
	"EventTriggerConfig",
	"EventTriggerConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_EventTriggerConfig_tags_1,
	sizeof(asn_DEF_RRC_EventTriggerConfig_tags_1)
		/sizeof(asn_DEF_RRC_EventTriggerConfig_tags_1[0]), /* 1 */
	asn_DEF_RRC_EventTriggerConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_EventTriggerConfig_tags_1)
		/sizeof(asn_DEF_RRC_EventTriggerConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_EventTriggerConfig_1,
	10,	/* Elements count */
	&asn_SPC_RRC_EventTriggerConfig_specs_1	/* Additional specs */
};

