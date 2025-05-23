/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CellGlobalIdUTRA_H_
#define	_LTE_CellGlobalIdUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PLMN-Identity.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CellGlobalIdUTRA */
typedef struct LTE_CellGlobalIdUTRA {
	LTE_PLMN_Identity_t	 plmn_Identity;
	BIT_STRING_t	 cellIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellGlobalIdUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellGlobalIdUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellGlobalIdUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellGlobalIdUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellGlobalIdUTRA_H_ */
#include <asn_internal.h>
