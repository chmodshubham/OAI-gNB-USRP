/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_ECID_Error_H_
#define	_LPP_ECID_Error_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_ECID_Error_PR {
	LPP_ECID_Error_PR_NOTHING,	/* No components present */
	LPP_ECID_Error_PR_locationServerErrorCauses,
	LPP_ECID_Error_PR_targetDeviceErrorCauses
	/* Extensions may appear below */
	
} LPP_ECID_Error_PR;

/* Forward declarations */
struct LPP_ECID_LocationServerErrorCauses;
struct LPP_ECID_TargetDeviceErrorCauses;

/* LPP_ECID-Error */
typedef struct LPP_ECID_Error {
	LPP_ECID_Error_PR present;
	union LPP_ECID_Error_u {
		struct LPP_ECID_LocationServerErrorCauses	*locationServerErrorCauses;
		struct LPP_ECID_TargetDeviceErrorCauses	*targetDeviceErrorCauses;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_ECID_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_ECID_Error;
extern asn_CHOICE_specifics_t asn_SPC_LPP_ECID_Error_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_ECID_Error_1[2];
extern asn_per_constraints_t asn_PER_type_LPP_ECID_Error_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_ECID_Error_H_ */
#include <asn_internal.h>
