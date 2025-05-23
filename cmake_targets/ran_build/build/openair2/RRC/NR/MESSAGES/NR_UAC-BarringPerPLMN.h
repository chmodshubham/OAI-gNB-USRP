/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UAC_BarringPerPLMN_H_
#define	_NR_UAC_BarringPerPLMN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR_UAC-BarringInfoSetIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR {
	NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR_NOTHING,	/* No components present */
	NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR_uac_ImplicitACBarringList,
	NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR_uac_ExplicitACBarringList
} NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR;

/* Forward declarations */
struct NR_UAC_BarringPerCatList;

/* NR_UAC-BarringPerPLMN */
typedef struct NR_UAC_BarringPerPLMN {
	long	 plmn_IdentityIndex;
	struct NR_UAC_BarringPerPLMN__uac_ACBarringListType {
		NR_UAC_BarringPerPLMN__uac_ACBarringListType_PR present;
		union NR_UAC_BarringPerPLMN__NR_uac_ACBarringListType_u {
			struct NR_UAC_BarringPerPLMN__uac_ACBarringListType__uac_ImplicitACBarringList {
				A_SEQUENCE_OF(NR_UAC_BarringInfoSetIndex_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *uac_ImplicitACBarringList;
			struct NR_UAC_BarringPerCatList	*uac_ExplicitACBarringList;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uac_ACBarringListType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UAC_BarringPerPLMN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UAC_BarringPerPLMN;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UAC_BarringPerPLMN_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UAC_BarringPerPLMN_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UAC-BarringPerCatList.h"

#endif	/* _NR_UAC_BarringPerPLMN_H_ */
#include <asn_internal.h>
