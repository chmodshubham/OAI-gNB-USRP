/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType13_r9_H_
#define	_LTE_SystemInformationBlockType13_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MBSFN-AreaInfoList-r9.h"
#include "LTE_MBMS-NotificationConfig-r9.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MBMS_NotificationConfig_v1430;

/* LTE_SystemInformationBlockType13-r9 */
typedef struct LTE_SystemInformationBlockType13_r9 {
	LTE_MBSFN_AreaInfoList_r9_t	 mbsfn_AreaInfoList_r9;
	LTE_MBMS_NotificationConfig_r9_t	 notificationConfig_r9;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType13_r9__ext1 {
		struct LTE_MBMS_NotificationConfig_v1430	*notificationConfig_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType13_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType13_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType13_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType13_r9_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBMS-NotificationConfig-v1430.h"

#endif	/* _LTE_SystemInformationBlockType13_r9_H_ */
#include <asn_internal.h>
