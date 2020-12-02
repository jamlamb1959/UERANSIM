/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CG_Config_v1560_IEs_H_
#define	_RRC_CG_Config_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueEUTRA.h"
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include "RRC_EUTRA-PhysCellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CG_Config_v1560_IEs__needForGaps {
	RRC_CG_Config_v1560_IEs__needForGaps_true	= 0
} e_RRC_CG_Config_v1560_IEs__needForGaps;

/* Forward declarations */
struct RRC_CandidateServingFreqListEUTRA;
struct RRC_DRX_Config;

/* RRC_CG-Config-v1560-IEs */
typedef struct RRC_CG_Config_v1560_IEs {
	RRC_ARFCN_ValueEUTRA_t	*pSCellFrequencyEUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*scg_CellGroupConfigEUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*candidateCellInfoListSN_EUTRA;	/* OPTIONAL */
	struct RRC_CandidateServingFreqListEUTRA	*candidateServingFreqListEUTRA;	/* OPTIONAL */
	long	*needForGaps;	/* OPTIONAL */
	struct RRC_DRX_Config	*drx_ConfigSCG;	/* OPTIONAL */
	struct RRC_CG_Config_v1560_IEs__reportCGI_RequestEUTRA {
		struct RRC_CG_Config_v1560_IEs__reportCGI_RequestEUTRA__requestedCellInfoEUTRA {
			RRC_ARFCN_ValueEUTRA_t	 eutraFrequency;
			RRC_EUTRA_PhysCellId_t	 cellForWhichToReportCGI_EUTRA;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *requestedCellInfoEUTRA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reportCGI_RequestEUTRA;
	struct RRC_CG_Config_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CG_Config_v1560_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_needForGaps_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CG_Config_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CG_Config_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CG_Config_v1560_IEs_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CG_Config_v1560_IEs_H_ */
#include <asn_internal.h>
