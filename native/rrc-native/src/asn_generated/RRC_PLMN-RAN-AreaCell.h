/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PLMN_RAN_AreaCell_H_
#define	_RRC_PLMN_RAN_AreaCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_CellIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_PLMN_Identity;

/* RRC_PLMN-RAN-AreaCell */
typedef struct RRC_PLMN_RAN_AreaCell {
	struct RRC_PLMN_Identity	*plmn_Identity;	/* OPTIONAL */
	struct RRC_PLMN_RAN_AreaCell__ran_AreaCells {
		A_SEQUENCE_OF(RRC_CellIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ran_AreaCells;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PLMN_RAN_AreaCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PLMN_RAN_AreaCell;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PLMN_RAN_AreaCell_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PLMN_RAN_AreaCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PLMN_RAN_AreaCell_H_ */
#include <asn_internal.h>