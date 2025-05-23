/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UECapabilityInformationSidelink_IEs_r16_H_
#define	_NR_UECapabilityInformationSidelink_IEs_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_AccessStratumReleaseSidelink-r16.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PDCP_ParametersSidelink_r16;
struct NR_RLC_ParametersSidelink_r16;
struct NR_BandCombinationListSidelinkNR_r16;
struct NR_FreqBandList;
struct NR_BandSidelinkPC5_r16;

/* NR_UECapabilityInformationSidelink-IEs-r16 */
typedef struct NR_UECapabilityInformationSidelink_IEs_r16 {
	NR_AccessStratumReleaseSidelink_r16_t	 accessStratumReleaseSidelink_r16;
	struct NR_PDCP_ParametersSidelink_r16	*pdcp_ParametersSidelink_r16;	/* OPTIONAL */
	struct NR_RLC_ParametersSidelink_r16	*rlc_ParametersSidelink_r16;	/* OPTIONAL */
	struct NR_BandCombinationListSidelinkNR_r16	*supportedBandCombinationListSidelinkNR_r16;	/* OPTIONAL */
	struct NR_UECapabilityInformationSidelink_IEs_r16__supportedBandListSidelink_r16 {
		A_SEQUENCE_OF(struct NR_BandSidelinkPC5_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListSidelink_r16;
	struct NR_FreqBandList	*appliedFreqBandListFilter_r16;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_UECapabilityInformationSidelink_IEs_r16__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UECapabilityInformationSidelink_IEs_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UECapabilityInformationSidelink_IEs_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UECapabilityInformationSidelink_IEs_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UECapabilityInformationSidelink_IEs_r16_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PDCP-ParametersSidelink-r16.h"
#include "NR_RLC-ParametersSidelink-r16.h"
#include "NR_BandCombinationListSidelinkNR-r16.h"
#include "NR_FreqBandList.h"
#include "NR_BandSidelinkPC5-r16.h"

#endif	/* _NR_UECapabilityInformationSidelink_IEs_r16_H_ */
#include <asn_internal.h>
