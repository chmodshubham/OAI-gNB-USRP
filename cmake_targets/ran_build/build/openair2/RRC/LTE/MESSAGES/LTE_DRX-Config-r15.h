/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DRX_Config_r15_H_
#define	_LTE_DRX_Config_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15 {
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti10	= 0,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti20	= 1,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti40	= 2,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti64	= 3,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti80	= 4,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti96	= 5,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti112	= 6,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti128	= 7,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti160	= 8,
	LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15_tti320	= 9
} e_LTE_DRX_Config_r15__drx_RetransmissionTimerShortTTI_r15;
typedef enum LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15 {
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti0	= 0,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti1	= 1,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti2	= 2,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti4	= 3,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti6	= 4,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti8	= 5,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti16	= 6,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti24	= 7,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti33	= 8,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti40	= 9,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti64	= 10,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti80	= 11,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti96	= 12,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti112	= 13,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti128	= 14,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti160	= 15,
	LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15_tti320	= 16
} e_LTE_DRX_Config_r15__drx_UL_RetransmissionTimerShortTTI_r15;

/* LTE_DRX-Config-r15 */
typedef struct LTE_DRX_Config_r15 {
	long	*drx_RetransmissionTimerShortTTI_r15;	/* OPTIONAL */
	long	*drx_UL_RetransmissionTimerShortTTI_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRX_Config_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_RetransmissionTimerShortTTI_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_UL_RetransmissionTimerShortTTI_r15_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DRX_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRX_Config_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DRX_Config_r15_H_ */
#include <asn_internal.h>
