/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SpCellConfig_H_
#define	_RRC_SpCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ServCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_SpCellConfig__rlmInSyncOutOfSyncThreshold {
	RRC_SpCellConfig__rlmInSyncOutOfSyncThreshold_n1	= 0
} e_RRC_SpCellConfig__rlmInSyncOutOfSyncThreshold;

/* Forward declarations */
struct RRC_ReconfigurationWithSync;
struct RRC_SetupRelease_RLF_TimersAndConstants;
struct RRC_ServingCellConfig;

/* RRC_SpCellConfig */
typedef struct RRC_SpCellConfig {
	RRC_ServCellIndex_t	*servCellIndex;	/* OPTIONAL */
	struct RRC_ReconfigurationWithSync	*reconfigurationWithSync;	/* OPTIONAL */
	struct RRC_SetupRelease_RLF_TimersAndConstants	*rlf_TimersAndConstants;	/* OPTIONAL */
	long	*rlmInSyncOutOfSyncThreshold;	/* OPTIONAL */
	struct RRC_ServingCellConfig	*spCellConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SpCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_rlmInSyncOutOfSyncThreshold_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SpCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SpCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SpCellConfig_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SpCellConfig_H_ */
#include <asn_internal.h>