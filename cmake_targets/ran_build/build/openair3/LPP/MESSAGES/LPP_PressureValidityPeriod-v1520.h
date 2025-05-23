/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_PressureValidityPeriod_v1520_H_
#define	_LPP_PressureValidityPeriod_v1520_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-SystemTime.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_PressureValidityPeriod-v1520 */
typedef struct LPP_PressureValidityPeriod_v1520 {
	LPP_GNSS_SystemTime_t	 beginTime_v1520;
	long	*beginTimeAlt_v1520;	/* OPTIONAL */
	long	 duration_v1520;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_PressureValidityPeriod_v1520_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_PressureValidityPeriod_v1520;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_PressureValidityPeriod_v1520_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_PressureValidityPeriod_v1520_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_PressureValidityPeriod_v1520_H_ */
#include <asn_internal.h>
