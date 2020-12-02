/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_CGI-InfoNR.h"

#include "RRC_PLMN-IdentityInfoList.h"
#include "RRC_MultiFrequencyBandListNR.h"
static int
memb_RRC_ssb_SubcarrierOffset_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_RRC_ssb_SubcarrierOffset_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_noSIB1_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_CGI_InfoNR__noSIB1, ssb_SubcarrierOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_ssb_SubcarrierOffset_constr_5,  memb_RRC_ssb_SubcarrierOffset_constraint_4 },
		0, 0, /* No default value */
		"ssb-SubcarrierOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_CGI_InfoNR__noSIB1, pdcch_ConfigSIB1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_PDCCH_ConfigSIB1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-ConfigSIB1"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_noSIB1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_noSIB1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-SubcarrierOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdcch-ConfigSIB1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_noSIB1_specs_4 = {
	sizeof(struct RRC_CGI_InfoNR__noSIB1),
	offsetof(struct RRC_CGI_InfoNR__noSIB1, _asn_ctx),
	asn_MAP_RRC_noSIB1_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_noSIB1_4 = {
	"noSIB1",
	"noSIB1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_noSIB1_tags_4,
	sizeof(asn_DEF_RRC_noSIB1_tags_4)
		/sizeof(asn_DEF_RRC_noSIB1_tags_4[0]) - 1, /* 1 */
	asn_DEF_RRC_noSIB1_tags_4,	/* Same as above */
	sizeof(asn_DEF_RRC_noSIB1_tags_4)
		/sizeof(asn_DEF_RRC_noSIB1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_noSIB1_4,
	2,	/* Elements count */
	&asn_SPC_RRC_noSIB1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_CGI_InfoNR_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RRC_CGI_InfoNR, plmn_IdentityInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_PLMN_IdentityInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityInfoList"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_CGI_InfoNR, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MultiFrequencyBandListNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyBandList"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_CGI_InfoNR, noSIB1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_RRC_noSIB1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"noSIB1"
		},
};
static const int asn_MAP_RRC_CGI_InfoNR_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRC_CGI_InfoNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_CGI_InfoNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* noSIB1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_CGI_InfoNR_specs_1 = {
	sizeof(struct RRC_CGI_InfoNR),
	offsetof(struct RRC_CGI_InfoNR, _asn_ctx),
	asn_MAP_RRC_CGI_InfoNR_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_CGI_InfoNR_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_CGI_InfoNR = {
	"CGI-InfoNR",
	"CGI-InfoNR",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_CGI_InfoNR_tags_1,
	sizeof(asn_DEF_RRC_CGI_InfoNR_tags_1)
		/sizeof(asn_DEF_RRC_CGI_InfoNR_tags_1[0]), /* 1 */
	asn_DEF_RRC_CGI_InfoNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_CGI_InfoNR_tags_1)
		/sizeof(asn_DEF_RRC_CGI_InfoNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_CGI_InfoNR_1,
	3,	/* Elements count */
	&asn_SPC_RRC_CGI_InfoNR_specs_1	/* Additional specs */
};
