/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PerCC_GapIndication_r14_H_
#define	_LTE_PerCC_GapIndication_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ServCellIndex-r13.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PerCC_GapIndication_r14__gapIndication_r14 {
	LTE_PerCC_GapIndication_r14__gapIndication_r14_gap	= 0,
	LTE_PerCC_GapIndication_r14__gapIndication_r14_ncsg	= 1,
	LTE_PerCC_GapIndication_r14__gapIndication_r14_nogap_noNcsg	= 2
} e_LTE_PerCC_GapIndication_r14__gapIndication_r14;

/* LTE_PerCC-GapIndication-r14 */
typedef struct LTE_PerCC_GapIndication_r14 {
	LTE_ServCellIndex_r13_t	 servCellId_r14;
	long	 gapIndication_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PerCC_GapIndication_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gapIndication_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PerCC_GapIndication_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PerCC_GapIndication_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PerCC_GapIndication_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PerCC_GapIndication_r14_H_ */
#include <asn_internal.h>
