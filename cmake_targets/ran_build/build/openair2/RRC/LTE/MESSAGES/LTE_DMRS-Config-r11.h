/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DMRS_Config_r11_H_
#define	_LTE_DMRS_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DMRS_Config_r11_PR {
	LTE_DMRS_Config_r11_PR_NOTHING,	/* No components present */
	LTE_DMRS_Config_r11_PR_release,
	LTE_DMRS_Config_r11_PR_setup
} LTE_DMRS_Config_r11_PR;

/* LTE_DMRS-Config-r11 */
typedef struct LTE_DMRS_Config_r11 {
	LTE_DMRS_Config_r11_PR present;
	union LTE_DMRS_Config_r11_u {
		NULL_t	 release;
		struct LTE_DMRS_Config_r11__setup {
			long	 scramblingIdentity_r11;
			long	 scramblingIdentity2_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DMRS_Config_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DMRS_Config_r11;
extern asn_CHOICE_specifics_t asn_SPC_LTE_DMRS_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DMRS_Config_r11_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_DMRS_Config_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DMRS_Config_r11_H_ */
#include <asn_internal.h>
