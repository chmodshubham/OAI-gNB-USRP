/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_ReportQuantityWLAN_r13_H_
#define	_LTE_ReportQuantityWLAN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ReportQuantityWLAN_r13__bandRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__bandRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__bandRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__carrierInfoRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__availableAdmissionCapacityRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__backhaulDL_BandwidthRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__backhaulUL_BandwidthRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__channelUtilizationRequestWLAN_r13;
typedef enum LTE_ReportQuantityWLAN_r13__stationCountRequestWLAN_r13 {
	LTE_ReportQuantityWLAN_r13__stationCountRequestWLAN_r13_true	= 0
} e_LTE_ReportQuantityWLAN_r13__stationCountRequestWLAN_r13;

/* LTE_ReportQuantityWLAN-r13 */
typedef struct LTE_ReportQuantityWLAN_r13 {
	long	*bandRequestWLAN_r13;	/* OPTIONAL */
	long	*carrierInfoRequestWLAN_r13;	/* OPTIONAL */
	long	*availableAdmissionCapacityRequestWLAN_r13;	/* OPTIONAL */
	long	*backhaulDL_BandwidthRequestWLAN_r13;	/* OPTIONAL */
	long	*backhaulUL_BandwidthRequestWLAN_r13;	/* OPTIONAL */
	long	*channelUtilizationRequestWLAN_r13;	/* OPTIONAL */
	long	*stationCountRequestWLAN_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReportQuantityWLAN_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_bandRequestWLAN_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_carrierInfoRequestWLAN_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_availableAdmissionCapacityRequestWLAN_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_backhaulDL_BandwidthRequestWLAN_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_backhaulUL_BandwidthRequestWLAN_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_channelUtilizationRequestWLAN_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_stationCountRequestWLAN_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReportQuantityWLAN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReportQuantityWLAN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReportQuantityWLAN_r13_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ReportQuantityWLAN_r13_H_ */
#include <asn_internal.h>
