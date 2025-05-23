/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_RTD_InfoElement_r16_H_
#define	_LPP_RTD_InfoElement_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_NR-PhysCellID-r16.h"
#include "LPP_ARFCN-ValueNR-r15.h"
#include "LPP_NR-TimingQuality-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_NCGI_r15;

/* LPP_RTD-InfoElement-r16 */
typedef struct LPP_RTD_InfoElement_r16 {
	long	 dl_PRS_ID_r16;
	LPP_NR_PhysCellID_r16_t	*nr_PhysCellID_r16;	/* OPTIONAL */
	struct LPP_NCGI_r15	*nr_CellGlobalID_r16;	/* OPTIONAL */
	LPP_ARFCN_ValueNR_r15_t	*nr_ARFCN_r16;	/* OPTIONAL */
	long	 subframeOffset_r16;
	LPP_NR_TimingQuality_r16_t	 rtd_Quality_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_RTD_InfoElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_RTD_InfoElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_RTD_InfoElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_RTD_InfoElement_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_RTD_InfoElement_r16_H_ */
#include <asn_internal.h>
