/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_EstablishmentCause_H_
#define	_RRC_EstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_EstablishmentCause {
	RRC_EstablishmentCause_emergency	= 0,
	RRC_EstablishmentCause_highPriorityAccess	= 1,
	RRC_EstablishmentCause_mt_Access	= 2,
	RRC_EstablishmentCause_mo_Signalling	= 3,
	RRC_EstablishmentCause_mo_Data	= 4,
	RRC_EstablishmentCause_mo_VoiceCall	= 5,
	RRC_EstablishmentCause_mo_VideoCall	= 6,
	RRC_EstablishmentCause_mo_SMS	= 7,
	RRC_EstablishmentCause_mps_PriorityAccess	= 8,
	RRC_EstablishmentCause_mcs_PriorityAccess	= 9,
	RRC_EstablishmentCause_spare6	= 10,
	RRC_EstablishmentCause_spare5	= 11,
	RRC_EstablishmentCause_spare4	= 12,
	RRC_EstablishmentCause_spare3	= 13,
	RRC_EstablishmentCause_spare2	= 14,
	RRC_EstablishmentCause_spare1	= 15
} e_RRC_EstablishmentCause;

/* RRC_EstablishmentCause */
typedef long	 RRC_EstablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_EstablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_EstablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_EstablishmentCause_specs_1;
asn_struct_free_f RRC_EstablishmentCause_free;
asn_struct_print_f RRC_EstablishmentCause_print;
asn_constr_check_f RRC_EstablishmentCause_constraint;
ber_type_decoder_f RRC_EstablishmentCause_decode_ber;
der_type_encoder_f RRC_EstablishmentCause_encode_der;
xer_type_decoder_f RRC_EstablishmentCause_decode_xer;
xer_type_encoder_f RRC_EstablishmentCause_encode_xer;
per_type_decoder_f RRC_EstablishmentCause_decode_uper;
per_type_encoder_f RRC_EstablishmentCause_encode_uper;
per_type_decoder_f RRC_EstablishmentCause_decode_aper;
per_type_encoder_f RRC_EstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_EstablishmentCause_H_ */
#include <asn_internal.h>
