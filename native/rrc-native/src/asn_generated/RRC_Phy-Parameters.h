/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_Phy_Parameters_H_
#define	_RRC_Phy_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_Phy_ParametersCommon;
struct RRC_Phy_ParametersXDD_Diff;
struct RRC_Phy_ParametersFRX_Diff;
struct RRC_Phy_ParametersFR1;
struct RRC_Phy_ParametersFR2;

/* RRC_Phy-Parameters */
typedef struct RRC_Phy_Parameters {
	struct RRC_Phy_ParametersCommon	*phy_ParametersCommon;	/* OPTIONAL */
	struct RRC_Phy_ParametersXDD_Diff	*phy_ParametersXDD_Diff;	/* OPTIONAL */
	struct RRC_Phy_ParametersFRX_Diff	*phy_ParametersFRX_Diff;	/* OPTIONAL */
	struct RRC_Phy_ParametersFR1	*phy_ParametersFR1;	/* OPTIONAL */
	struct RRC_Phy_ParametersFR2	*phy_ParametersFR2;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_Phy_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_Phy_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_Phy_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_Phy_Parameters_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_Phy_Parameters_H_ */
#include <asn_internal.h>
