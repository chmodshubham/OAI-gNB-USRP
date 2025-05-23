/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RLF_TimersAndConstants_r9_H_
#define	_LTE_RLF_TimersAndConstants_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLF_TimersAndConstants_r9_PR {
	LTE_RLF_TimersAndConstants_r9_PR_NOTHING,	/* No components present */
	LTE_RLF_TimersAndConstants_r9_PR_release,
	LTE_RLF_TimersAndConstants_r9_PR_setup
} LTE_RLF_TimersAndConstants_r9_PR;
typedef enum LTE_RLF_TimersAndConstants_r9__setup__t301_r9 {
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms100	= 0,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms200	= 1,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms300	= 2,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms400	= 3,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms600	= 4,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms1000	= 5,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms1500	= 6,
	LTE_RLF_TimersAndConstants_r9__setup__t301_r9_ms2000	= 7
} e_LTE_RLF_TimersAndConstants_r9__setup__t301_r9;
typedef enum LTE_RLF_TimersAndConstants_r9__setup__t310_r9 {
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms0	= 0,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms50	= 1,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms100	= 2,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms200	= 3,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms500	= 4,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms1000	= 5,
	LTE_RLF_TimersAndConstants_r9__setup__t310_r9_ms2000	= 6
} e_LTE_RLF_TimersAndConstants_r9__setup__t310_r9;
typedef enum LTE_RLF_TimersAndConstants_r9__setup__n310_r9 {
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n1	= 0,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n2	= 1,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n3	= 2,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n4	= 3,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n6	= 4,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n8	= 5,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n10	= 6,
	LTE_RLF_TimersAndConstants_r9__setup__n310_r9_n20	= 7
} e_LTE_RLF_TimersAndConstants_r9__setup__n310_r9;
typedef enum LTE_RLF_TimersAndConstants_r9__setup__t311_r9 {
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms1000	= 0,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms3000	= 1,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms5000	= 2,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms10000	= 3,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms15000	= 4,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms20000	= 5,
	LTE_RLF_TimersAndConstants_r9__setup__t311_r9_ms30000	= 6
} e_LTE_RLF_TimersAndConstants_r9__setup__t311_r9;
typedef enum LTE_RLF_TimersAndConstants_r9__setup__n311_r9 {
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n1	= 0,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n2	= 1,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n3	= 2,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n4	= 3,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n5	= 4,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n6	= 5,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n8	= 6,
	LTE_RLF_TimersAndConstants_r9__setup__n311_r9_n10	= 7
} e_LTE_RLF_TimersAndConstants_r9__setup__n311_r9;

/* LTE_RLF-TimersAndConstants-r9 */
typedef struct LTE_RLF_TimersAndConstants_r9 {
	LTE_RLF_TimersAndConstants_r9_PR present;
	union LTE_RLF_TimersAndConstants_r9_u {
		NULL_t	 release;
		struct LTE_RLF_TimersAndConstants_r9__setup {
			long	 t301_r9;
			long	 t310_r9;
			long	 n310_r9;
			long	 t311_r9;
			long	 n311_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLF_TimersAndConstants_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t301_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t310_r9_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n310_r9_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t311_r9_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n311_r9_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLF_TimersAndConstants_r9;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLF_TimersAndConstants_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLF_TimersAndConstants_r9_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_RLF_TimersAndConstants_r9_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLF_TimersAndConstants_r9_H_ */
#include <asn_internal.h>
