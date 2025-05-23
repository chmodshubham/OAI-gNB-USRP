/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CQI_ReportBoth_v1310_H_
#define	_LTE_CQI_ReportBoth_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CSI_IM_ConfigToReleaseListExt_r13;
struct LTE_CSI_IM_ConfigToAddModListExt_r13;

/* LTE_CQI-ReportBoth-v1310 */
typedef struct LTE_CQI_ReportBoth_v1310 {
	struct LTE_CSI_IM_ConfigToReleaseListExt_r13	*csi_IM_ConfigToReleaseListExt_r13;	/* OPTIONAL */
	struct LTE_CSI_IM_ConfigToAddModListExt_r13	*csi_IM_ConfigToAddModListExt_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportBoth_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportBoth_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportBoth_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportBoth_v1310_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-IM-ConfigToReleaseListExt-r13.h"
#include "LTE_CSI-IM-ConfigToAddModListExt-r13.h"

#endif	/* _LTE_CQI_ReportBoth_v1310_H_ */
#include <asn_internal.h>
