/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_AC_BarringPerPLMN_r12_H_
#define	_LTE_AC_BarringPerPLMN_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVoice_r12 {
	LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVoice_r12_true	= 0
} e_LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVoice_r12;
typedef enum LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVideo_r12 {
	LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVideo_r12_true	= 0
} e_LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForMMTELVideo_r12;
typedef enum LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForSMS_r12 {
	LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForSMS_r12_true	= 0
} e_LTE_AC_BarringPerPLMN_r12__ac_BarringSkipForSMS_r12;

/* Forward declarations */
struct LTE_AC_BarringConfig;

/* LTE_AC-BarringPerPLMN-r12 */
typedef struct LTE_AC_BarringPerPLMN_r12 {
	long	 plmn_IdentityIndex_r12;
	struct LTE_AC_BarringPerPLMN_r12__ac_BarringInfo_r12 {
		BOOLEAN_t	 ac_BarringForEmergency_r12;
		struct LTE_AC_BarringConfig	*ac_BarringForMO_Signalling_r12;	/* OPTIONAL */
		struct LTE_AC_BarringConfig	*ac_BarringForMO_Data_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ac_BarringInfo_r12;
	long	*ac_BarringSkipForMMTELVoice_r12;	/* OPTIONAL */
	long	*ac_BarringSkipForMMTELVideo_r12;	/* OPTIONAL */
	long	*ac_BarringSkipForSMS_r12;	/* OPTIONAL */
	struct LTE_AC_BarringConfig	*ac_BarringForCSFB_r12;	/* OPTIONAL */
	struct LTE_AC_BarringConfig	*ssac_BarringForMMTEL_Voice_r12;	/* OPTIONAL */
	struct LTE_AC_BarringConfig	*ssac_BarringForMMTEL_Video_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AC_BarringPerPLMN_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForMMTELVoice_r12_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForMMTELVideo_r12_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringSkipForSMS_r12_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AC_BarringPerPLMN_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AC_BarringPerPLMN_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AC_BarringPerPLMN_r12_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AC-BarringConfig.h"

#endif	/* _LTE_AC_BarringPerPLMN_r12_H_ */
#include <asn_internal.h>
