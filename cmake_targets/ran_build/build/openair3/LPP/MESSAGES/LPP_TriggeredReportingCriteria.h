/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_TriggeredReportingCriteria_H_
#define	_LPP_TriggeredReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "LPP_ReportingDuration.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_TriggeredReportingCriteria */
typedef struct LPP_TriggeredReportingCriteria {
	BOOLEAN_t	 cellChange;
	LPP_ReportingDuration_t	 reportingDuration;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_TriggeredReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_TriggeredReportingCriteria;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_TriggeredReportingCriteria_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_TriggeredReportingCriteria_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_TriggeredReportingCriteria_H_ */
#include <asn_internal.h>
