/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RegisteredAMF_H_
#define	_NR_RegisteredAMF_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_AMF-Identifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PLMN_Identity;

/* NR_RegisteredAMF */
typedef struct NR_RegisteredAMF {
	struct NR_PLMN_Identity	*plmn_Identity;	/* OPTIONAL */
	NR_AMF_Identifier_t	 amf_Identifier;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RegisteredAMF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RegisteredAMF;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RegisteredAMF_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RegisteredAMF_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PLMN-Identity.h"

#endif	/* _NR_RegisteredAMF_H_ */
#include <asn_internal.h>
