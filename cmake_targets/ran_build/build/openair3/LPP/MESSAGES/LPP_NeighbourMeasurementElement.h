/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NeighbourMeasurementElement_H_
#define	_LPP_NeighbourMeasurementElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_ARFCN-ValueEUTRA.h"
#include "LPP_OTDOA-MeasQuality.h"
#include "LPP_ARFCN-ValueEUTRA-v9a0.h"
#include <constr_SEQUENCE.h>
#include "LPP_CarrierFreqOffsetNB-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_ECGI;
struct LPP_AdditionalPathList_r14;

/* LPP_NeighbourMeasurementElement */
typedef struct LPP_NeighbourMeasurementElement {
	long	 physCellIdNeighbour;
	struct LPP_ECGI	*cellGlobalIdNeighbour;	/* OPTIONAL */
	LPP_ARFCN_ValueEUTRA_t	*earfcnNeighbour;	/* OPTIONAL */
	long	 rstd;
	LPP_OTDOA_MeasQuality_t	 rstd_Quality;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_NeighbourMeasurementElement__ext1 {
		LPP_ARFCN_ValueEUTRA_v9a0_t	*earfcnNeighbour_v9a0;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_NeighbourMeasurementElement__ext2 {
		long	*tpIdNeighbour_r14;	/* OPTIONAL */
		long	*prsIdNeighbour_r14;	/* OPTIONAL */
		long	*delta_rstd_r14;	/* OPTIONAL */
		struct LPP_AdditionalPathList_r14	*additionalPathsNeighbour_r14;	/* OPTIONAL */
		long	*nprsIdNeighbour_r14;	/* OPTIONAL */
		LPP_CarrierFreqOffsetNB_r14_t	*carrierFreqOffsetNB_Neighbour_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LPP_NeighbourMeasurementElement__ext3 {
		long	*delta_SFN_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NeighbourMeasurementElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NeighbourMeasurementElement;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NeighbourMeasurementElement_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NeighbourMeasurementElement_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NeighbourMeasurementElement_H_ */
#include <asn_internal.h>
