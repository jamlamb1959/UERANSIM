/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_DRB_ToAddMod_H_
#define	_RRC_DRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_DRB-Identity.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_DRB_ToAddMod__cnAssociation_PR {
	RRC_DRB_ToAddMod__cnAssociation_PR_NOTHING,	/* No components present */
	RRC_DRB_ToAddMod__cnAssociation_PR_eps_BearerIdentity,
	RRC_DRB_ToAddMod__cnAssociation_PR_sdap_Config
} RRC_DRB_ToAddMod__cnAssociation_PR;
typedef enum RRC_DRB_ToAddMod__reestablishPDCP {
	RRC_DRB_ToAddMod__reestablishPDCP_true	= 0
} e_RRC_DRB_ToAddMod__reestablishPDCP;
typedef enum RRC_DRB_ToAddMod__recoverPDCP {
	RRC_DRB_ToAddMod__recoverPDCP_true	= 0
} e_RRC_DRB_ToAddMod__recoverPDCP;

/* Forward declarations */
struct RRC_PDCP_Config;
struct RRC_SDAP_Config;

/* RRC_DRB-ToAddMod */
typedef struct RRC_DRB_ToAddMod {
	struct RRC_DRB_ToAddMod__cnAssociation {
		RRC_DRB_ToAddMod__cnAssociation_PR present;
		union RRC_DRB_ToAddMod__RRC_cnAssociation_u {
			long	 eps_BearerIdentity;
			struct RRC_SDAP_Config	*sdap_Config;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cnAssociation;
	RRC_DRB_Identity_t	 drb_Identity;
	long	*reestablishPDCP;	/* OPTIONAL */
	long	*recoverPDCP;	/* OPTIONAL */
	struct RRC_PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_DRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_reestablishPDCP_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_recoverPDCP_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_DRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_DRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_DRB_ToAddMod_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_DRB_ToAddMod_H_ */
#include <asn_internal.h>
