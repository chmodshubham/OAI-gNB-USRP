/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MPE_Config_FR2_r16_H_
#define	_NR_MPE_Config_FR2_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16 {
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf0	= 0,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf10	= 1,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf20	= 2,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf50	= 3,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf100	= 4,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf200	= 5,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf500	= 6,
	NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16_sf1000	= 7
} e_NR_MPE_Config_FR2_r16__mpe_ProhibitTimer_r16;
typedef enum NR_MPE_Config_FR2_r16__mpe_Threshold_r16 {
	NR_MPE_Config_FR2_r16__mpe_Threshold_r16_dB3	= 0,
	NR_MPE_Config_FR2_r16__mpe_Threshold_r16_dB6	= 1,
	NR_MPE_Config_FR2_r16__mpe_Threshold_r16_dB9	= 2,
	NR_MPE_Config_FR2_r16__mpe_Threshold_r16_dB12	= 3
} e_NR_MPE_Config_FR2_r16__mpe_Threshold_r16;

/* NR_MPE-Config-FR2-r16 */
typedef struct NR_MPE_Config_FR2_r16 {
	long	 mpe_ProhibitTimer_r16;
	long	 mpe_Threshold_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MPE_Config_FR2_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mpe_ProhibitTimer_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mpe_Threshold_r16_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MPE_Config_FR2_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MPE_Config_FR2_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MPE_Config_FR2_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MPE_Config_FR2_r16_H_ */
#include <asn_internal.h>
