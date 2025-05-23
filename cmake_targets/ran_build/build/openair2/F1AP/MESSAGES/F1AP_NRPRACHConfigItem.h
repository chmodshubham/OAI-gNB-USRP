/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_NRPRACHConfigItem_H_
#define	_F1AP_NRPRACHConfigItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_NRSCS.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "F1AP_FreqDomainLength.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_NRPRACHConfigItem__msg1FDM {
	F1AP_NRPRACHConfigItem__msg1FDM_one	= 0,
	F1AP_NRPRACHConfigItem__msg1FDM_two	= 1,
	F1AP_NRPRACHConfigItem__msg1FDM_four	= 2,
	F1AP_NRPRACHConfigItem__msg1FDM_eight	= 3
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_NRPRACHConfigItem__msg1FDM;
typedef enum F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion {
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_oneEighth	= 0,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_oneFourth	= 1,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_oneHalf	= 2,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_one	= 3,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_two	= 4,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_four	= 5,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_eight	= 6,
	F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion_sixteen	= 7
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_NRPRACHConfigItem__ssb_perRACH_Occasion;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_NRPRACHConfigItem */
typedef struct F1AP_NRPRACHConfigItem {
	F1AP_NRSCS_t	 nRSCS;
	long	 prachFreqStartfromCarrier;
	long	 msg1FDM;
	long	 parchConfigIndex;
	long	 ssb_perRACH_Occasion;
	F1AP_FreqDomainLength_t	 freqDomainLength;
	long	 zeroCorrelZoneConfig;
	struct F1AP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_NRPRACHConfigItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_msg1FDM_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_ssb_perRACH_Occasion_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_NRPRACHConfigItem;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_NRPRACHConfigItem_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_NRPRACHConfigItem_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_NRPRACHConfigItem_H_ */
#include <asn_internal.h>
