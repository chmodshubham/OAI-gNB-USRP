/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_EUTRA_FreqBlackCellList_H_
#define	_NR_EUTRA_FreqBlackCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_EUTRA_PhysCellIdRange;

/* NR_EUTRA-FreqBlackCellList */
typedef struct NR_EUTRA_FreqBlackCellList {
	A_SEQUENCE_OF(struct NR_EUTRA_PhysCellIdRange) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EUTRA_FreqBlackCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_FreqBlackCellList;
extern asn_SET_OF_specifics_t asn_SPC_NR_EUTRA_FreqBlackCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EUTRA_FreqBlackCellList_1[1];
extern asn_per_constraints_t asn_PER_type_NR_EUTRA_FreqBlackCellList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_EUTRA-PhysCellIdRange.h"

#endif	/* _NR_EUTRA_FreqBlackCellList_H_ */
#include <asn_internal.h>
