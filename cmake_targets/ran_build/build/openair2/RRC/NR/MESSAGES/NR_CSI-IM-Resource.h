/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CSI_IM_Resource_H_
#define	_NR_CSI_IM_Resource_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CSI-IM-ResourceId.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR {
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_NOTHING,	/* No components present */
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_pattern0,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_pattern1
} NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR;
typedef enum NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0 {
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s0	= 0,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s2	= 1,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s4	= 2,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s6	= 3,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s8	= 4,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s10	= 5
} e_NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0;
typedef enum NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1 {
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s0	= 0,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s4	= 1,
	NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s8	= 2
} e_NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1;

/* Forward declarations */
struct NR_CSI_FrequencyOccupation;
struct NR_CSI_ResourcePeriodicityAndOffset;

/* NR_CSI-IM-Resource */
typedef struct NR_CSI_IM_Resource {
	NR_CSI_IM_ResourceId_t	 csi_IM_ResourceId;
	struct NR_CSI_IM_Resource__csi_IM_ResourceElementPattern {
		NR_CSI_IM_Resource__csi_IM_ResourceElementPattern_PR present;
		union NR_CSI_IM_Resource__NR_csi_IM_ResourceElementPattern_u {
			struct NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0 {
				long	 subcarrierLocation_p0;
				long	 symbolLocation_p0;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *pattern0;
			struct NR_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1 {
				long	 subcarrierLocation_p1;
				long	 symbolLocation_p1;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *pattern1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceElementPattern;
	struct NR_CSI_FrequencyOccupation	*freqBand;	/* OPTIONAL */
	struct NR_CSI_ResourcePeriodicityAndOffset	*periodicityAndOffset;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CSI_IM_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_subcarrierLocation_p0_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_subcarrierLocation_p1_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CSI_IM_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_IM_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CSI_IM_Resource_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CSI-FrequencyOccupation.h"
#include "NR_CSI-ResourcePeriodicityAndOffset.h"

#endif	/* _NR_CSI_IM_Resource_H_ */
#include <asn_internal.h>
