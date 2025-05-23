/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MRDC_AssistanceInfo_H_
#define	_NR_MRDC_AssistanceInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_AffectedCarrierFreqCombInfoMRDC;

/* NR_MRDC-AssistanceInfo */
typedef struct NR_MRDC_AssistanceInfo {
	struct NR_MRDC_AssistanceInfo__affectedCarrierFreqCombInfoListMRDC {
		A_SEQUENCE_OF(struct NR_AffectedCarrierFreqCombInfoMRDC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} affectedCarrierFreqCombInfoListMRDC;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MRDC_AssistanceInfo__ext1 {
		OCTET_STRING_t	*overheatingAssistanceSCG_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MRDC_AssistanceInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MRDC_AssistanceInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_AssistanceInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MRDC_AssistanceInfo_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_AffectedCarrierFreqCombInfoMRDC.h"

#endif	/* _NR_MRDC_AssistanceInfo_H_ */
#include <asn_internal.h>
