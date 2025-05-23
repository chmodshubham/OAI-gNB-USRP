/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SchedulingInfo_H_
#define	_LTE_SchedulingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_SIB-MappingInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SchedulingInfo__si_Periodicity {
	LTE_SchedulingInfo__si_Periodicity_rf8	= 0,
	LTE_SchedulingInfo__si_Periodicity_rf16	= 1,
	LTE_SchedulingInfo__si_Periodicity_rf32	= 2,
	LTE_SchedulingInfo__si_Periodicity_rf64	= 3,
	LTE_SchedulingInfo__si_Periodicity_rf128	= 4,
	LTE_SchedulingInfo__si_Periodicity_rf256	= 5,
	LTE_SchedulingInfo__si_Periodicity_rf512	= 6
} e_LTE_SchedulingInfo__si_Periodicity;

/* LTE_SchedulingInfo */
typedef struct LTE_SchedulingInfo {
	long	 si_Periodicity;
	LTE_SIB_MappingInfo_t	 sib_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SchedulingInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_si_Periodicity_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SchedulingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SchedulingInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SchedulingInfo_H_ */
#include <asn_internal.h>
