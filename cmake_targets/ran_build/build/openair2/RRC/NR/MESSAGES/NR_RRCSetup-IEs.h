/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCSetup_IEs_H_
#define	_NR_RRCSetup_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RadioBearerConfig.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RRCSetup-IEs */
typedef struct NR_RRCSetup_IEs {
	NR_RadioBearerConfig_t	 radioBearerConfig;
	OCTET_STRING_t	 masterCellGroup;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_RRCSetup_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCSetup_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCSetup_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCSetup_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCSetup_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RRCSetup_IEs_H_ */
#include <asn_internal.h>
