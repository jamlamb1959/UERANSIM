/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ShortI_RNTI_Value_H_
#define	_RRC_ShortI_RNTI_Value_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_ShortI-RNTI-Value */
typedef BIT_STRING_t	 RRC_ShortI_RNTI_Value_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_ShortI_RNTI_Value_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_ShortI_RNTI_Value;
asn_struct_free_f RRC_ShortI_RNTI_Value_free;
asn_struct_print_f RRC_ShortI_RNTI_Value_print;
asn_constr_check_f RRC_ShortI_RNTI_Value_constraint;
ber_type_decoder_f RRC_ShortI_RNTI_Value_decode_ber;
der_type_encoder_f RRC_ShortI_RNTI_Value_encode_der;
xer_type_decoder_f RRC_ShortI_RNTI_Value_decode_xer;
xer_type_encoder_f RRC_ShortI_RNTI_Value_encode_xer;
per_type_decoder_f RRC_ShortI_RNTI_Value_decode_uper;
per_type_encoder_f RRC_ShortI_RNTI_Value_encode_uper;
per_type_decoder_f RRC_ShortI_RNTI_Value_decode_aper;
per_type_encoder_f RRC_ShortI_RNTI_Value_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ShortI_RNTI_Value_H_ */
#include <asn_internal.h>
