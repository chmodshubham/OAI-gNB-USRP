/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_RequestedSRSTransmissionCharacteristics_H_
#define	_F1AP_RequestedSRSTransmissionCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "F1AP_BandwidthSRS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_RequestedSRSTransmissionCharacteristics__resourceType {
	F1AP_RequestedSRSTransmissionCharacteristics__resourceType_periodic	= 0,
	F1AP_RequestedSRSTransmissionCharacteristics__resourceType_semi_persistent	= 1,
	F1AP_RequestedSRSTransmissionCharacteristics__resourceType_aperiodic	= 2
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_RequestedSRSTransmissionCharacteristics__resourceType;

/* Forward declarations */
struct F1AP_SRSResourceSetList;
struct F1AP_SSBInformation;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_RequestedSRSTransmissionCharacteristics */
typedef struct F1AP_RequestedSRSTransmissionCharacteristics {
	long	*numberOfTransmissions;	/* OPTIONAL */
	long	 resourceType;
	F1AP_BandwidthSRS_t	 bandwidthSRS;
	struct F1AP_SRSResourceSetList	*sRSResourceSetList;	/* OPTIONAL */
	struct F1AP_SSBInformation	*sSBInformation;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_RequestedSRSTransmissionCharacteristics_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_resourceType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_RequestedSRSTransmissionCharacteristics;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_RequestedSRSTransmissionCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_RequestedSRSTransmissionCharacteristics_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_RequestedSRSTransmissionCharacteristics_H_ */
#include <asn_internal.h>
