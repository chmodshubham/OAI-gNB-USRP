/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCResume_H_
#define	_NR_RRCResume_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCResume__criticalExtensions_PR {
	NR_RRCResume__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_RRCResume__criticalExtensions_PR_rrcResume,
	NR_RRCResume__criticalExtensions_PR_criticalExtensionsFuture
} NR_RRCResume__criticalExtensions_PR;

/* Forward declarations */
struct NR_RRCResume_IEs;

/* NR_RRCResume */
typedef struct NR_RRCResume {
	NR_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct NR_RRCResume__criticalExtensions {
		NR_RRCResume__criticalExtensions_PR present;
		union NR_RRCResume__NR_criticalExtensions_u {
			struct NR_RRCResume_IEs	*rrcResume;
			struct NR_RRCResume__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCResume_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCResume;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResume_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCResume_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RRCResume-IEs.h"

#endif	/* _NR_RRCResume_H_ */
#include <asn_internal.h>
