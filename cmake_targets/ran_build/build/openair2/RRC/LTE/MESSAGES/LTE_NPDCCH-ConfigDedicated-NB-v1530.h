/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_NPDCCH_ConfigDedicated_NB_v1530_H_
#define	_LTE_NPDCCH_ConfigDedicated_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530 {
	LTE_NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530_v96	= 0,
	LTE_NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530_v128	= 1
} e_LTE_NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530;

/* LTE_NPDCCH-ConfigDedicated-NB-v1530 */
typedef struct LTE_NPDCCH_ConfigDedicated_NB_v1530 {
	long	 npdcch_StartSF_USS_v1530;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPDCCH_ConfigDedicated_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_USS_v1530_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPDCCH_ConfigDedicated_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPDCCH_ConfigDedicated_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPDCCH_ConfigDedicated_NB_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NPDCCH_ConfigDedicated_NB_v1530_H_ */
#include <asn_internal.h>
