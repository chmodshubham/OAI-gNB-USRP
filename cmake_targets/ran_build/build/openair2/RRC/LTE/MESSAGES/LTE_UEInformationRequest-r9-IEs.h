/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UEInformationRequest_r9_IEs_H_
#define	_LTE_UEInformationRequest_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UEInformationRequest_v930_IEs;

/* LTE_UEInformationRequest-r9-IEs */
typedef struct LTE_UEInformationRequest_r9_IEs {
	BOOLEAN_t	 rach_ReportReq_r9;
	BOOLEAN_t	 rlf_ReportReq_r9;
	struct LTE_UEInformationRequest_v930_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEInformationRequest_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEInformationRequest_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEInformationRequest_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEInformationRequest_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UEInformationRequest-v930-IEs.h"

#endif	/* _LTE_UEInformationRequest_r9_IEs_H_ */
#include <asn_internal.h>
