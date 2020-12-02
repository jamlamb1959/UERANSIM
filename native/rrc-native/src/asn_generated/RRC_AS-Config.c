/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_AS-Config.h"

static int
memb_RRC_sourceRB_SN_Config_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_RRC_sourceSCG_NR_Config_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_RRC_rrcReconfiguration_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_RRC_sourceRB_SN_Config_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_sourceSCG_NR_Config_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_rrcReconfiguration_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_ext1_4[] = {
	{ ATF_POINTER, 3, offsetof(struct RRC_AS_Config__ext1, sourceRB_SN_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_sourceRB_SN_Config_constr_5,  memb_RRC_sourceRB_SN_Config_constraint_4 },
		0, 0, /* No default value */
		"sourceRB-SN-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_AS_Config__ext1, sourceSCG_NR_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_sourceSCG_NR_Config_constr_6,  memb_RRC_sourceSCG_NR_Config_constraint_4 },
		0, 0, /* No default value */
		"sourceSCG-NR-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_AS_Config__ext1, sourceSCG_EUTRA_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSCG-EUTRA-Config"
		},
};
static const int asn_MAP_RRC_ext1_oms_4[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceRB-SN-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceSCG-NR-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sourceSCG-EUTRA-Config */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_4 = {
	sizeof(struct RRC_AS_Config__ext1),
	offsetof(struct RRC_AS_Config__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_4,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_4,
	sizeof(asn_DEF_RRC_ext1_tags_4)
		/sizeof(asn_DEF_RRC_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_4)
		/sizeof(asn_DEF_RRC_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_4,
	3,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_AS_Config, rrcReconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_rrcReconfiguration_constr_2,  memb_RRC_rrcReconfiguration_constraint_1 },
		0, 0, /* No default value */
		"rrcReconfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_AS_Config, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_AS_Config_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_RRC_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcReconfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_AS_Config_specs_1 = {
	sizeof(struct RRC_AS_Config),
	offsetof(struct RRC_AS_Config, _asn_ctx),
	asn_MAP_RRC_AS_Config_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_AS_Config_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_AS_Config = {
	"AS-Config",
	"AS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_AS_Config_tags_1,
	sizeof(asn_DEF_RRC_AS_Config_tags_1)
		/sizeof(asn_DEF_RRC_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_RRC_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_AS_Config_tags_1)
		/sizeof(asn_DEF_RRC_AS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_AS_Config_1,
	2,	/* Elements count */
	&asn_SPC_RRC_AS_Config_specs_1	/* Additional specs */
};
