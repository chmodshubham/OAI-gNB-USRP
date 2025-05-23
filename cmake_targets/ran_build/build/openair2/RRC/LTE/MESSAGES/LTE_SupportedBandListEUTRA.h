/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SupportedBandListEUTRA_H_
#define	_LTE_SupportedBandListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SupportedBandEUTRA;

/* LTE_SupportedBandListEUTRA */
typedef struct LTE_SupportedBandListEUTRA {
	A_SEQUENCE_OF(struct LTE_SupportedBandEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SupportedBandListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandListEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_LTE_SupportedBandListEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SupportedBandListEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_SupportedBandListEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandEUTRA.h"

#endif	/* _LTE_SupportedBandListEUTRA_H_ */
#include <asn_internal.h>
