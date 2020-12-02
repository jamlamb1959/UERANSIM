/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SlotFormatCombination_H_
#define	_RRC_SlotFormatCombination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_SlotFormatCombinationId.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_SlotFormatCombination */
typedef struct RRC_SlotFormatCombination {
	RRC_SlotFormatCombinationId_t	 slotFormatCombinationId;
	struct RRC_SlotFormatCombination__slotFormats {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} slotFormats;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SlotFormatCombination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SlotFormatCombination;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SlotFormatCombination_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SlotFormatCombination_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SlotFormatCombination_H_ */
#include <asn_internal.h>
