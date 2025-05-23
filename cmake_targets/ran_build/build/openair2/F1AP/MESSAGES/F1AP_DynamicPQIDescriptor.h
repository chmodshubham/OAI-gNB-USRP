/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_DynamicPQIDescriptor_H_
#define	_F1AP_DynamicPQIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "F1AP_PacketDelayBudget.h"
#include "F1AP_PacketErrorRate.h"
#include "F1AP_AveragingWindow.h"
#include "F1AP_MaxDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_DynamicPQIDescriptor__resourceType {
	F1AP_DynamicPQIDescriptor__resourceType_gbr	= 0,
	F1AP_DynamicPQIDescriptor__resourceType_non_gbr	= 1,
	F1AP_DynamicPQIDescriptor__resourceType_delay_critical_grb	= 2
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_DynamicPQIDescriptor__resourceType;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_DynamicPQIDescriptor */
typedef struct F1AP_DynamicPQIDescriptor {
	long	*resourceType;	/* OPTIONAL */
	long	 qoSPriorityLevel;
	F1AP_PacketDelayBudget_t	 packetDelayBudget;
	F1AP_PacketErrorRate_t	 packetErrorRate;
	F1AP_AveragingWindow_t	*averagingWindow;	/* OPTIONAL */
	F1AP_MaxDataBurstVolume_t	*maxDataBurstVolume;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_DynamicPQIDescriptor_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_resourceType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_DynamicPQIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_DynamicPQIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_DynamicPQIDescriptor_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_DynamicPQIDescriptor_H_ */
#include <asn_internal.h>
