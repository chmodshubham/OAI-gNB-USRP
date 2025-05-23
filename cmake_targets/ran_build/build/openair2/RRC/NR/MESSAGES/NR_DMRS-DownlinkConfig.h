/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DMRS_DownlinkConfig_H_
#define	_NR_DMRS_DownlinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DMRS_DownlinkConfig__dmrs_Type {
	NR_DMRS_DownlinkConfig__dmrs_Type_type2	= 0
} e_NR_DMRS_DownlinkConfig__dmrs_Type;
typedef enum NR_DMRS_DownlinkConfig__dmrs_AdditionalPosition {
	NR_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos0	= 0,
	NR_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos1	= 1,
	NR_DMRS_DownlinkConfig__dmrs_AdditionalPosition_pos3	= 2
} e_NR_DMRS_DownlinkConfig__dmrs_AdditionalPosition;
typedef enum NR_DMRS_DownlinkConfig__maxLength {
	NR_DMRS_DownlinkConfig__maxLength_len2	= 0
} e_NR_DMRS_DownlinkConfig__maxLength;
typedef enum NR_DMRS_DownlinkConfig__ext1__dmrs_Downlink_r16 {
	NR_DMRS_DownlinkConfig__ext1__dmrs_Downlink_r16_enabled	= 0
} e_NR_DMRS_DownlinkConfig__ext1__dmrs_Downlink_r16;

/* Forward declarations */
struct NR_SetupRelease_PTRS_DownlinkConfig;

/* NR_DMRS-DownlinkConfig */
typedef struct NR_DMRS_DownlinkConfig {
	long	*dmrs_Type;	/* OPTIONAL */
	long	*dmrs_AdditionalPosition;	/* OPTIONAL */
	long	*maxLength;	/* OPTIONAL */
	long	*scramblingID0;	/* OPTIONAL */
	long	*scramblingID1;	/* OPTIONAL */
	struct NR_SetupRelease_PTRS_DownlinkConfig	*phaseTrackingRS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DMRS_DownlinkConfig__ext1 {
		long	*dmrs_Downlink_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DMRS_DownlinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Type_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_AdditionalPosition_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxLength_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Downlink_r16_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DMRS_DownlinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DMRS_DownlinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DMRS_DownlinkConfig_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_DMRS_DownlinkConfig_H_ */
#include <asn_internal.h>
