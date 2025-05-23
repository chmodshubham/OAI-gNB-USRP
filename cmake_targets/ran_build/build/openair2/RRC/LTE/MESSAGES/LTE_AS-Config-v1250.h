/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_AS_Config_v1250_H_
#define	_LTE_AS_Config_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_WLAN_OffloadConfig_r12;
struct LTE_SL_CommConfig_r12;
struct LTE_SL_DiscConfig_r12;

/* LTE_AS-Config-v1250 */
typedef struct LTE_AS_Config_v1250 {
	struct LTE_WLAN_OffloadConfig_r12	*sourceWlan_OffloadConfig_r12;	/* OPTIONAL */
	struct LTE_SL_CommConfig_r12	*sourceSL_CommConfig_r12;	/* OPTIONAL */
	struct LTE_SL_DiscConfig_r12	*sourceSL_DiscConfig_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AS_Config_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AS_Config_v1250_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_WLAN-OffloadConfig-r12.h"
#include "LTE_SL-CommConfig-r12.h"
#include "LTE_SL-DiscConfig-r12.h"

#endif	/* _LTE_AS_Config_v1250_H_ */
#include <asn_internal.h>
