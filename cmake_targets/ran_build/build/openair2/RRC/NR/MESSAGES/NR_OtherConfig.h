/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_OtherConfig_H_
#define	_NR_OtherConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_OtherConfig__delayBudgetReportingConfig_PR {
	NR_OtherConfig__delayBudgetReportingConfig_PR_NOTHING,	/* No components present */
	NR_OtherConfig__delayBudgetReportingConfig_PR_release,
	NR_OtherConfig__delayBudgetReportingConfig_PR_setup
} NR_OtherConfig__delayBudgetReportingConfig_PR;
typedef enum NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer {
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0	= 0,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0dot4	= 1,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0dot8	= 2,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s1dot6	= 3,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s3	= 4,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s6	= 5,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s12	= 6,
	NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s30	= 7
} e_NR_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer;

/* NR_OtherConfig */
typedef struct NR_OtherConfig {
	struct NR_OtherConfig__delayBudgetReportingConfig {
		NR_OtherConfig__delayBudgetReportingConfig_PR present;
		union NR_OtherConfig__NR_delayBudgetReportingConfig_u {
			NULL_t	 release;
			struct NR_OtherConfig__delayBudgetReportingConfig__setup {
				long	 delayBudgetReportingProhibitTimer;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *delayBudgetReportingConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_OtherConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_delayBudgetReportingProhibitTimer_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_OtherConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_OtherConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_OtherConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_OtherConfig_H_ */
#include <asn_internal.h>
