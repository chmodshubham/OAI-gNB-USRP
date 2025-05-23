/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SlotFormatCombination_H_
#define	_NR_SlotFormatCombination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SlotFormatCombinationId.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_SlotFormatCombination */
typedef struct NR_SlotFormatCombination {
	NR_SlotFormatCombinationId_t	 slotFormatCombinationId;
	struct NR_SlotFormatCombination__slotFormats {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} slotFormats;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SlotFormatCombination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SlotFormatCombination;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SlotFormatCombination_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SlotFormatCombination_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SlotFormatCombination_H_ */
#include <asn_internal.h>
