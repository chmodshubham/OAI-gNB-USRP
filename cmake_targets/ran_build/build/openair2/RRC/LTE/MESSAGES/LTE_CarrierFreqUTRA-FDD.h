/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CarrierFreqUTRA_FDD_H_
#define	_LTE_CarrierFreqUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueUTRA.h"
#include "LTE_CellReselectionPriority.h"
#include "LTE_ReselectionThreshold.h"
#include <NativeInteger.h>
#include "LTE_ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CarrierFreqUTRA-FDD */
typedef struct LTE_CarrierFreqUTRA_FDD {
	LTE_ARFCN_ValueUTRA_t	 carrierFreq;
	LTE_CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	LTE_ReselectionThreshold_t	 threshX_High;
	LTE_ReselectionThreshold_t	 threshX_Low;
	long	 q_RxLevMin;
	long	 p_MaxUTRA;
	long	 q_QualMin;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_CarrierFreqUTRA_FDD__ext1 {
		struct LTE_CarrierFreqUTRA_FDD__ext1__threshX_Q_r9 {
			LTE_ReselectionThresholdQ_r9_t	 threshX_HighQ_r9;
			LTE_ReselectionThresholdQ_r9_t	 threshX_LowQ_r9;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *threshX_Q_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqUTRA_FDD;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqUTRA_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqUTRA_FDD_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreqUTRA_FDD_H_ */
#include <asn_internal.h>
