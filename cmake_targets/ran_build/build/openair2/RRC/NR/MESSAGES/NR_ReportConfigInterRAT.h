/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ReportConfigInterRAT_H_
#define	_NR_ReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ReportConfigInterRAT__reportType_PR {
	NR_ReportConfigInterRAT__reportType_PR_NOTHING,	/* No components present */
	NR_ReportConfigInterRAT__reportType_PR_periodical,
	NR_ReportConfigInterRAT__reportType_PR_eventTriggered,
	NR_ReportConfigInterRAT__reportType_PR_reportCGI,
	/* Extensions may appear below */
	NR_ReportConfigInterRAT__reportType_PR_reportSFTD
} NR_ReportConfigInterRAT__reportType_PR;

/* Forward declarations */
struct NR_PeriodicalReportConfigInterRAT;
struct NR_EventTriggerConfigInterRAT;
struct NR_ReportCGI_EUTRA;
struct NR_ReportSFTD_EUTRA;

/* NR_ReportConfigInterRAT */
typedef struct NR_ReportConfigInterRAT {
	struct NR_ReportConfigInterRAT__reportType {
		NR_ReportConfigInterRAT__reportType_PR present;
		union NR_ReportConfigInterRAT__NR_reportType_u {
			struct NR_PeriodicalReportConfigInterRAT	*periodical;
			struct NR_EventTriggerConfigInterRAT	*eventTriggered;
			struct NR_ReportCGI_EUTRA	*reportCGI;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct NR_ReportSFTD_EUTRA	*reportSFTD;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ReportConfigInterRAT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ReportConfigInterRAT_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PeriodicalReportConfigInterRAT.h"
#include "NR_EventTriggerConfigInterRAT.h"
#include "NR_ReportCGI-EUTRA.h"
#include "NR_ReportSFTD-EUTRA.h"

#endif	/* _NR_ReportConfigInterRAT_H_ */
#include <asn_internal.h>
