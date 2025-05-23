/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CSG_AllowedReportingCells_r9_H_
#define	_LTE_CSG_AllowedReportingCells_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhysCellIdRangeUTRA_FDDList_r9;

/* LTE_CSG-AllowedReportingCells-r9 */
typedef struct LTE_CSG_AllowedReportingCells_r9 {
	struct LTE_PhysCellIdRangeUTRA_FDDList_r9	*physCellIdRangeUTRA_FDDList_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSG_AllowedReportingCells_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSG_AllowedReportingCells_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSG_AllowedReportingCells_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSG_AllowedReportingCells_r9_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhysCellIdRangeUTRA-FDDList-r9.h"

#endif	/* _LTE_CSG_AllowedReportingCells_r9_H_ */
#include <asn_internal.h>
