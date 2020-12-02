/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SIB3_H_
#define	_RRC_SIB3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_IntraFreqNeighCellList;
struct RRC_IntraFreqBlackCellList;

/* RRC_SIB3 */
typedef struct RRC_SIB3 {
	struct RRC_IntraFreqNeighCellList	*intraFreqNeighCellList;	/* OPTIONAL */
	struct RRC_IntraFreqBlackCellList	*intraFreqBlackCellList;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SIB3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SIB3;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SIB3_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SIB3_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SIB3_H_ */
#include <asn_internal.h>
