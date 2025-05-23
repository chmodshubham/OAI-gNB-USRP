/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UE_MRDC_Capability_v1610_H_
#define	_NR_UE_MRDC_Capability_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasAndMobParametersMRDC_v1610;
struct NR_GeneralParametersMRDC_v1610;
struct NR_PDCP_ParametersMRDC_v1610;

/* NR_UE-MRDC-Capability-v1610 */
typedef struct NR_UE_MRDC_Capability_v1610 {
	struct NR_MeasAndMobParametersMRDC_v1610	*measAndMobParametersMRDC_v1610;	/* OPTIONAL */
	struct NR_GeneralParametersMRDC_v1610	*generalParametersMRDC_v1610;	/* OPTIONAL */
	struct NR_PDCP_ParametersMRDC_v1610	*pdcp_ParametersMRDC_v1610;	/* OPTIONAL */
	struct NR_UE_MRDC_Capability_v1610__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_MRDC_Capability_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_MRDC_Capability_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_MRDC_Capability_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_MRDC_Capability_v1610_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasAndMobParametersMRDC-v1610.h"
#include "NR_GeneralParametersMRDC-v1610.h"
#include "NR_PDCP-ParametersMRDC-v1610.h"

#endif	/* _NR_UE_MRDC_Capability_v1610_H_ */
#include <asn_internal.h>
