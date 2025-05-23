/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CodebookParametersAddition_r16_H_
#define	_NR_CodebookParametersAddition_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CodebookParametersAddition_r16__etype2_r16__paramComb7_8_r16 {
	NR_CodebookParametersAddition_r16__etype2_r16__paramComb7_8_r16_supported	= 0
} e_NR_CodebookParametersAddition_r16__etype2_r16__paramComb7_8_r16;
typedef enum NR_CodebookParametersAddition_r16__etype2_r16__rank3_4_r16 {
	NR_CodebookParametersAddition_r16__etype2_r16__rank3_4_r16_supported	= 0
} e_NR_CodebookParametersAddition_r16__etype2_r16__rank3_4_r16;
typedef enum NR_CodebookParametersAddition_r16__etype2_r16__amplitudeSubsetRestriction_r16 {
	NR_CodebookParametersAddition_r16__etype2_r16__amplitudeSubsetRestriction_r16_supported	= 0
} e_NR_CodebookParametersAddition_r16__etype2_r16__amplitudeSubsetRestriction_r16;
typedef enum NR_CodebookParametersAddition_r16__etype2_PS_r16__rank3_4_r16 {
	NR_CodebookParametersAddition_r16__etype2_PS_r16__rank3_4_r16_supported	= 0
} e_NR_CodebookParametersAddition_r16__etype2_PS_r16__rank3_4_r16;

/* NR_CodebookParametersAddition-r16 */
typedef struct NR_CodebookParametersAddition_r16 {
	struct NR_CodebookParametersAddition_r16__etype2_r16 {
		struct NR_CodebookParametersAddition_r16__etype2_r16__etype2R1_r16 {
			struct NR_CodebookParametersAddition_r16__etype2_r16__etype2R1_r16__supportedCSI_RS_ResourceListAdd_r16 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceListAdd_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} etype2R1_r16;
		struct NR_CodebookParametersAddition_r16__etype2_r16__etype2R2_r16 {
			struct NR_CodebookParametersAddition_r16__etype2_r16__etype2R2_r16__supportedCSI_RS_ResourceListAdd_r16 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceListAdd_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *etype2R2_r16;
		long	*paramComb7_8_r16;	/* OPTIONAL */
		long	*rank3_4_r16;	/* OPTIONAL */
		long	*amplitudeSubsetRestriction_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *etype2_r16;
	struct NR_CodebookParametersAddition_r16__etype2_PS_r16 {
		struct NR_CodebookParametersAddition_r16__etype2_PS_r16__etype2R1_PortSelection_r16 {
			struct NR_CodebookParametersAddition_r16__etype2_PS_r16__etype2R1_PortSelection_r16__supportedCSI_RS_ResourceListAdd_r16 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceListAdd_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} etype2R1_PortSelection_r16;
		struct NR_CodebookParametersAddition_r16__etype2_PS_r16__etype2R2_PortSelection_r16 {
			struct NR_CodebookParametersAddition_r16__etype2_PS_r16__etype2R2_PortSelection_r16__supportedCSI_RS_ResourceListAdd_r16 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceListAdd_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *etype2R2_PortSelection_r16;
		long	*rank3_4_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *etype2_PS_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CodebookParametersAddition_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_paramComb7_8_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rank3_4_r16_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_amplitudeSubsetRestriction_r16_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rank3_4_r16_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CodebookParametersAddition_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CodebookParametersAddition_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CodebookParametersAddition_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CodebookParametersAddition_r16_H_ */
#include <asn_internal.h>
