/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "/home/rcdu/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_ResetType_H_
#define	_M2AP_ResetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_ResetAll.h"
#include "M2AP_MBMS-Service-associatedLogicalM2-ConnectionListRes.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_ResetType_PR {
	M2AP_ResetType_PR_NOTHING,	/* No components present */
	M2AP_ResetType_PR_m2_Interface,
	M2AP_ResetType_PR_partOfM2_Interface
	/* Extensions may appear below */
	
} M2AP_ResetType_PR;

/* M2AP_ResetType */
typedef struct M2AP_ResetType {
	M2AP_ResetType_PR present;
	union M2AP_ResetType_u {
		M2AP_ResetAll_t	 m2_Interface;
		M2AP_MBMS_Service_associatedLogicalM2_ConnectionListRes_t	 partOfM2_Interface;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_ResetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ResetType;
extern asn_CHOICE_specifics_t asn_SPC_M2AP_ResetType_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_ResetType_1[2];
extern asn_per_constraints_t asn_PER_type_M2AP_ResetType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ResetType_H_ */
#include <asn_internal.h>
