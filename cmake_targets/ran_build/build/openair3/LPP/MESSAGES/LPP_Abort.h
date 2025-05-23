/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_Abort_H_
#define	_LPP_Abort_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_Abort__criticalExtensions_PR {
	LPP_Abort__criticalExtensions_PR_NOTHING,	/* No components present */
	LPP_Abort__criticalExtensions_PR_c1,
	LPP_Abort__criticalExtensions_PR_criticalExtensionsFuture
} LPP_Abort__criticalExtensions_PR;
typedef enum LPP_Abort__criticalExtensions__c1_PR {
	LPP_Abort__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LPP_Abort__criticalExtensions__c1_PR_abort_r9,
	LPP_Abort__criticalExtensions__c1_PR_spare3,
	LPP_Abort__criticalExtensions__c1_PR_spare2,
	LPP_Abort__criticalExtensions__c1_PR_spare1
} LPP_Abort__criticalExtensions__c1_PR;

/* Forward declarations */
struct LPP_Abort_r9_IEs;

/* LPP_Abort */
typedef struct LPP_Abort {
	struct LPP_Abort__criticalExtensions {
		LPP_Abort__criticalExtensions_PR present;
		union LPP_Abort__LPP_criticalExtensions_u {
			struct LPP_Abort__criticalExtensions__c1 {
				LPP_Abort__criticalExtensions__c1_PR present;
				union LPP_Abort__LPP_criticalExtensions__LPP_c1_u {
					struct LPP_Abort_r9_IEs	*abort_r9;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct LPP_Abort__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_Abort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_Abort;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_Abort_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_Abort_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_Abort_H_ */
#include <asn_internal.h>
