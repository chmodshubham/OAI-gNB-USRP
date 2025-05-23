/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasurementReportSidelink_H_
#define	_NR_MeasurementReportSidelink_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasurementReportSidelink__criticalExtensions_PR {
	NR_MeasurementReportSidelink__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_MeasurementReportSidelink__criticalExtensions_PR_measurementReportSidelink_r16,
	NR_MeasurementReportSidelink__criticalExtensions_PR_criticalExtensionsFuture
} NR_MeasurementReportSidelink__criticalExtensions_PR;

/* Forward declarations */
struct NR_MeasurementReportSidelink_IEs_r16;

/* NR_MeasurementReportSidelink */
typedef struct NR_MeasurementReportSidelink {
	struct NR_MeasurementReportSidelink__criticalExtensions {
		NR_MeasurementReportSidelink__criticalExtensions_PR present;
		union NR_MeasurementReportSidelink__NR_criticalExtensions_u {
			struct NR_MeasurementReportSidelink_IEs_r16	*measurementReportSidelink_r16;
			struct NR_MeasurementReportSidelink__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasurementReportSidelink_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasurementReportSidelink;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasurementReportSidelink_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasurementReportSidelink_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasurementReportSidelink-IEs-r16.h"

#endif	/* _NR_MeasurementReportSidelink_H_ */
#include <asn_internal.h>
