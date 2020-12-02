/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_TAG_H_
#define	_RRC_TAG_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_TAG-Id.h"
#include "RRC_TimeAlignmentTimer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_TAG */
typedef struct RRC_TAG {
	RRC_TAG_Id_t	 tag_Id;
	RRC_TimeAlignmentTimer_t	 timeAlignmentTimer;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_TAG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_TAG;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_TAG_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_TAG_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_TAG_H_ */
#include <asn_internal.h>
