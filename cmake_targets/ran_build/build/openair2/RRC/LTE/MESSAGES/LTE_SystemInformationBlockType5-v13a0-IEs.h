/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType5_v13a0_IEs_H_
#define	_LTE_SystemInformationBlockType5_v13a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_InterFreqCarrierFreqList_v13a0;

/* LTE_SystemInformationBlockType5-v13a0-IEs */
typedef struct LTE_SystemInformationBlockType5_v13a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_InterFreqCarrierFreqList_v13a0	*interFreqCarrierFreqList_v13a0;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType5_v13a0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType5_v13a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5_v13a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_v13a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_v13a0_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InterFreqCarrierFreqList-v13a0.h"

#endif	/* _LTE_SystemInformationBlockType5_v13a0_IEs_H_ */
#include <asn_internal.h>
