/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionSetupComplete_v1020_IEs_H_
#define	_LTE_RRCConnectionSetupComplete_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10 {
	LTE_RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10_native	= 0,
	LTE_RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10_mapped	= 1
} e_LTE_RRCConnectionSetupComplete_v1020_IEs__gummei_Type_r10;
typedef enum LTE_RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10 {
	LTE_RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10_true	= 0
} e_LTE_RRCConnectionSetupComplete_v1020_IEs__rlf_InfoAvailable_r10;
typedef enum LTE_RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10 {
	LTE_RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10_true	= 0
} e_LTE_RRCConnectionSetupComplete_v1020_IEs__logMeasAvailable_r10;
typedef enum LTE_RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10 {
	LTE_RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10_required	= 0,
	LTE_RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10_notRequired	= 1
} e_LTE_RRCConnectionSetupComplete_v1020_IEs__rn_SubframeConfigReq_r10;

/* Forward declarations */
struct LTE_RRCConnectionSetupComplete_v1130_IEs;

/* LTE_RRCConnectionSetupComplete-v1020-IEs */
typedef struct LTE_RRCConnectionSetupComplete_v1020_IEs {
	long	*gummei_Type_r10;	/* OPTIONAL */
	long	*rlf_InfoAvailable_r10;	/* OPTIONAL */
	long	*logMeasAvailable_r10;	/* OPTIONAL */
	long	*rn_SubframeConfigReq_r10;	/* OPTIONAL */
	struct LTE_RRCConnectionSetupComplete_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionSetupComplete_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gummei_Type_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rlf_InfoAvailable_r10_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailable_r10_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rn_SubframeConfigReq_r10_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_v1020_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RRCConnectionSetupComplete-v1130-IEs.h"

#endif	/* _LTE_RRCConnectionSetupComplete_v1020_IEs_H_ */
#include <asn_internal.h>
