/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_PSCCH_Config_r16_H_
#define	_NR_SL_PSCCH_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16 {
	NR_SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16_n2	= 0,
	NR_SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16_n3	= 1
} e_NR_SL_PSCCH_Config_r16__sl_TimeResourcePSCCH_r16;
typedef enum NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16 {
	NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n10	= 0,
	NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n12	= 1,
	NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n15	= 2,
	NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n20	= 3,
	NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16_n25	= 4
} e_NR_SL_PSCCH_Config_r16__sl_FreqResourcePSCCH_r16;

/* NR_SL-PSCCH-Config-r16 */
typedef struct NR_SL_PSCCH_Config_r16 {
	long	*sl_TimeResourcePSCCH_r16;	/* OPTIONAL */
	long	*sl_FreqResourcePSCCH_r16;	/* OPTIONAL */
	long	*sl_DMRS_ScrambleID_r16;	/* OPTIONAL */
	long	*sl_NumReservedBits_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PSCCH_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_TimeResourcePSCCH_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_FreqResourcePSCCH_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PSCCH_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PSCCH_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PSCCH_Config_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PSCCH_Config_r16_H_ */
#include <asn_internal.h>
