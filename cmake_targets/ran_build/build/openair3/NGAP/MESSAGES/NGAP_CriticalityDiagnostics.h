/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_CriticalityDiagnostics_H_
#define	_NGAP_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProcedureCode.h"
#include "NGAP_TriggeringMessage.h"
#include "NGAP_Criticality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_CriticalityDiagnostics_IE_List;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_CriticalityDiagnostics */
typedef struct NGAP_CriticalityDiagnostics {
	NGAP_ProcedureCode_t	*procedureCode;	/* OPTIONAL */
	NGAP_TriggeringMessage_t	*triggeringMessage;	/* OPTIONAL */
	NGAP_Criticality_t	*procedureCriticality;	/* OPTIONAL */
	struct NGAP_CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CriticalityDiagnostics;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_CriticalityDiagnostics_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CriticalityDiagnostics_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CriticalityDiagnostics_H_ */
#include <asn_internal.h>
