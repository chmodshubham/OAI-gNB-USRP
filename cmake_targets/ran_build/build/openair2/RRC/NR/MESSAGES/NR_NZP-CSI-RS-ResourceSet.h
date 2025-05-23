/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_NZP_CSI_RS_ResourceSet_H_
#define	_NR_NZP_CSI_RS_ResourceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_NZP-CSI-RS-ResourceSetId.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_NZP_CSI_RS_ResourceSet__repetition {
	NR_NZP_CSI_RS_ResourceSet__repetition_on	= 0,
	NR_NZP_CSI_RS_ResourceSet__repetition_off	= 1
} e_NR_NZP_CSI_RS_ResourceSet__repetition;
typedef enum NR_NZP_CSI_RS_ResourceSet__trs_Info {
	NR_NZP_CSI_RS_ResourceSet__trs_Info_true	= 0
} e_NR_NZP_CSI_RS_ResourceSet__trs_Info;

/* NR_NZP-CSI-RS-ResourceSet */
typedef struct NR_NZP_CSI_RS_ResourceSet {
	NR_NZP_CSI_RS_ResourceSetId_t	 nzp_CSI_ResourceSetId;
	struct NR_NZP_CSI_RS_ResourceSet__nzp_CSI_RS_Resources {
		A_SEQUENCE_OF(NR_NZP_CSI_RS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nzp_CSI_RS_Resources;
	long	*repetition;	/* OPTIONAL */
	long	*aperiodicTriggeringOffset;	/* OPTIONAL */
	long	*trs_Info;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_NZP_CSI_RS_ResourceSet__ext1 {
		long	*aperiodicTriggeringOffset_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_NZP_CSI_RS_ResourceSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repetition_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_trs_Info_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_NZP_CSI_RS_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_NZP_CSI_RS_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_NZP_CSI_RS_ResourceSet_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_NZP_CSI_RS_ResourceSet_H_ */
#include <asn_internal.h>
