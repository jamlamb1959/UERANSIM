/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ReportConfigToAddModList_H_
#define	_RRC_ReportConfigToAddModList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_ReportConfigToAddMod;

/* RRC_ReportConfigToAddModList */
typedef struct RRC_ReportConfigToAddModList {
	A_SEQUENCE_OF(struct RRC_ReportConfigToAddMod) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ReportConfigToAddModList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ReportConfigToAddModList;
extern asn_SET_OF_specifics_t asn_SPC_RRC_ReportConfigToAddModList_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ReportConfigToAddModList_1[1];
extern asn_per_constraints_t asn_PER_type_RRC_ReportConfigToAddModList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ReportConfigToAddModList_H_ */
#include <asn_internal.h>
