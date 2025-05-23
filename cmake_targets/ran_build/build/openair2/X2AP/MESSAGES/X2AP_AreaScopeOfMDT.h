/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_AreaScopeOfMDT_H_
#define	_X2AP_AreaScopeOfMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_CellBasedMDT.h"
#include "X2AP_TABasedMDT.h"
#include <NULL.h>
#include "X2AP_TAIBasedMDT.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_AreaScopeOfMDT_PR {
	X2AP_AreaScopeOfMDT_PR_NOTHING,	/* No components present */
	X2AP_AreaScopeOfMDT_PR_cellBased,
	X2AP_AreaScopeOfMDT_PR_tABased,
	X2AP_AreaScopeOfMDT_PR_pLMNWide,
	/* Extensions may appear below */
	X2AP_AreaScopeOfMDT_PR_tAIBased
} X2AP_AreaScopeOfMDT_PR;

/* X2AP_AreaScopeOfMDT */
typedef struct X2AP_AreaScopeOfMDT {
	X2AP_AreaScopeOfMDT_PR present;
	union X2AP_AreaScopeOfMDT_u {
		X2AP_CellBasedMDT_t	 cellBased;
		X2AP_TABasedMDT_t	 tABased;
		NULL_t	 pLMNWide;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		X2AP_TAIBasedMDT_t	 tAIBased;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_AreaScopeOfMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_AreaScopeOfMDT;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_AreaScopeOfMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_AreaScopeOfMDT_1[4];
extern asn_per_constraints_t asn_PER_type_X2AP_AreaScopeOfMDT_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_AreaScopeOfMDT_H_ */
#include <asn_internal.h>
