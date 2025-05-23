/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PowerRampingParameters_H_
#define	_LTE_PowerRampingParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PowerRampingParameters__powerRampingStep {
	LTE_PowerRampingParameters__powerRampingStep_dB0	= 0,
	LTE_PowerRampingParameters__powerRampingStep_dB2	= 1,
	LTE_PowerRampingParameters__powerRampingStep_dB4	= 2,
	LTE_PowerRampingParameters__powerRampingStep_dB6	= 3
} e_LTE_PowerRampingParameters__powerRampingStep;
typedef enum LTE_PowerRampingParameters__preambleInitialReceivedTargetPower {
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_120	= 0,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_118	= 1,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_116	= 2,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_114	= 3,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_112	= 4,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_110	= 5,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_108	= 6,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_106	= 7,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_104	= 8,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_102	= 9,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_100	= 10,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_98	= 11,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_96	= 12,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_94	= 13,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_92	= 14,
	LTE_PowerRampingParameters__preambleInitialReceivedTargetPower_dBm_90	= 15
} e_LTE_PowerRampingParameters__preambleInitialReceivedTargetPower;

/* LTE_PowerRampingParameters */
typedef struct LTE_PowerRampingParameters {
	long	 powerRampingStep;
	long	 preambleInitialReceivedTargetPower;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PowerRampingParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerRampingStep_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPower_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PowerRampingParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PowerRampingParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PowerRampingParameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PowerRampingParameters_H_ */
#include <asn_internal.h>
