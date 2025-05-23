/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_CriticalityDiagnostics_IE_List_H_
#define	_M3AP_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "M3AP_Criticality.h"
#include "M3AP_ProtocolIE-ID.h"
#include "M3AP_TypeOfError.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct M3AP_CriticalityDiagnostics_IE_List__Member {
	M3AP_Criticality_t	 iECriticality;
	M3AP_ProtocolIE_ID_t	 iE_ID;
	M3AP_TypeOfError_t	 typeOfError;
	struct M3AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_List__Member;

/* M3AP_CriticalityDiagnostics-IE-List */
typedef struct M3AP_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(CriticalityDiagnostics_IE_List__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_CriticalityDiagnostics_IE_List;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_CriticalityDiagnostics_IE_List_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_CriticalityDiagnostics_IE_List_1[1];
extern asn_per_constraints_t asn_PER_type_M3AP_CriticalityDiagnostics_IE_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
