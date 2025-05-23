/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PosSchedulingInfo_r16_H_
#define	_NR_PosSchedulingInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_PosSIB-MappingInfo-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PosSchedulingInfo_r16__offsetToSI_Used_r16 {
	NR_PosSchedulingInfo_r16__offsetToSI_Used_r16_true	= 0
} e_NR_PosSchedulingInfo_r16__offsetToSI_Used_r16;
typedef enum NR_PosSchedulingInfo_r16__posSI_Periodicity_r16 {
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf8	= 0,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf16	= 1,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf32	= 2,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf64	= 3,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf128	= 4,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf256	= 5,
	NR_PosSchedulingInfo_r16__posSI_Periodicity_r16_rf512	= 6
} e_NR_PosSchedulingInfo_r16__posSI_Periodicity_r16;
typedef enum NR_PosSchedulingInfo_r16__posSI_BroadcastStatus_r16 {
	NR_PosSchedulingInfo_r16__posSI_BroadcastStatus_r16_broadcasting	= 0,
	NR_PosSchedulingInfo_r16__posSI_BroadcastStatus_r16_notBroadcasting	= 1
} e_NR_PosSchedulingInfo_r16__posSI_BroadcastStatus_r16;

/* NR_PosSchedulingInfo-r16 */
typedef struct NR_PosSchedulingInfo_r16 {
	long	*offsetToSI_Used_r16;	/* OPTIONAL */
	long	 posSI_Periodicity_r16;
	long	 posSI_BroadcastStatus_r16;
	NR_PosSIB_MappingInfo_r16_t	 posSIB_MappingInfo_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PosSchedulingInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_offsetToSI_Used_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_posSI_Periodicity_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_posSI_BroadcastStatus_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PosSchedulingInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PosSchedulingInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PosSchedulingInfo_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PosSchedulingInfo_r16_H_ */
#include <asn_internal.h>
