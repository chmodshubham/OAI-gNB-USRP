/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PUSCH_Allocation_r16_H_
#define	_NR_PUSCH_Allocation_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUSCH_Allocation_r16__mappingType_r16 {
	NR_PUSCH_Allocation_r16__mappingType_r16_typeA	= 0,
	NR_PUSCH_Allocation_r16__mappingType_r16_typeB	= 1
} e_NR_PUSCH_Allocation_r16__mappingType_r16;
typedef enum NR_PUSCH_Allocation_r16__numberOfRepetitions_r16 {
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n1	= 0,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n2	= 1,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n3	= 2,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n4	= 3,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n7	= 4,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n8	= 5,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n12	= 6,
	NR_PUSCH_Allocation_r16__numberOfRepetitions_r16_n16	= 7
} e_NR_PUSCH_Allocation_r16__numberOfRepetitions_r16;

/* NR_PUSCH-Allocation-r16 */
typedef struct NR_PUSCH_Allocation_r16 {
	long	*mappingType_r16;	/* OPTIONAL */
	long	*startSymbolAndLength_r16;	/* OPTIONAL */
	long	*startSymbol_r16;	/* OPTIONAL */
	long	*length_r16;	/* OPTIONAL */
	long	*numberOfRepetitions_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUSCH_Allocation_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mappingType_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_numberOfRepetitions_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUSCH_Allocation_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUSCH_Allocation_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUSCH_Allocation_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PUSCH_Allocation_r16_H_ */
#include <asn_internal.h>
