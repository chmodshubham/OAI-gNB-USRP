/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandCombination_v1540_H_
#define	_NR_BandCombination_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CA_ParametersNR_v1540;
struct NR_BandParameters_v1540;

/* NR_BandCombination-v1540 */
typedef struct NR_BandCombination_v1540 {
	struct NR_BandCombination_v1540__bandList_v1540 {
		A_SEQUENCE_OF(struct NR_BandParameters_v1540) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandList_v1540;
	struct NR_CA_ParametersNR_v1540	*ca_ParametersNR_v1540;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandCombination_v1540_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandCombination_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandCombination_v1540_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CA-ParametersNR-v1540.h"
#include "NR_BandParameters-v1540.h"

#endif	/* _NR_BandCombination_v1540_H_ */
#include <asn_internal.h>
