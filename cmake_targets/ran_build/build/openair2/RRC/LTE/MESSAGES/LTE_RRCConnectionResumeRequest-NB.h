/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionResumeRequest_NB_H_
#define	_LTE_RRCConnectionResumeRequest_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCConnectionResumeRequest-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR {
	LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR_rrcConnectionResumeRequest_r13,
	LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR;

/* LTE_RRCConnectionResumeRequest-NB */
typedef struct LTE_RRCConnectionResumeRequest_NB {
	struct LTE_RRCConnectionResumeRequest_NB__criticalExtensions {
		LTE_RRCConnectionResumeRequest_NB__criticalExtensions_PR present;
		union LTE_RRCConnectionResumeRequest_NB__LTE_criticalExtensions_u {
			LTE_RRCConnectionResumeRequest_NB_r13_IEs_t	 rrcConnectionResumeRequest_r13;
			struct LTE_RRCConnectionResumeRequest_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionResumeRequest_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResumeRequest_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResumeRequest_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResumeRequest_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionResumeRequest_NB_H_ */
#include <asn_internal.h>
