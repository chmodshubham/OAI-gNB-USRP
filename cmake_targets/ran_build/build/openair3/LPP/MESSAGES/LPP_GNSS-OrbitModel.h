/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_OrbitModel_H_
#define	_LPP_GNSS_OrbitModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_OrbitModel_PR {
	LPP_GNSS_OrbitModel_PR_NOTHING,	/* No components present */
	LPP_GNSS_OrbitModel_PR_keplerianSet,
	LPP_GNSS_OrbitModel_PR_nav_KeplerianSet,
	LPP_GNSS_OrbitModel_PR_cnav_KeplerianSet,
	LPP_GNSS_OrbitModel_PR_glonass_ECEF,
	LPP_GNSS_OrbitModel_PR_sbas_ECEF,
	/* Extensions may appear below */
	LPP_GNSS_OrbitModel_PR_bds_KeplerianSet_r12,
	LPP_GNSS_OrbitModel_PR_bds_KeplerianSet2_r16,
	LPP_GNSS_OrbitModel_PR_navic_KeplerianSet_r16
} LPP_GNSS_OrbitModel_PR;

/* Forward declarations */
struct LPP_NavModelKeplerianSet;
struct LPP_NavModelNAV_KeplerianSet;
struct LPP_NavModelCNAV_KeplerianSet;
struct LPP_NavModel_GLONASS_ECEF;
struct LPP_NavModel_SBAS_ECEF;
struct LPP_NavModel_BDS_KeplerianSet_r12;
struct LPP_NavModel_BDS_KeplerianSet2_r16;
struct LPP_NavModel_NavIC_KeplerianSet_r16;

/* LPP_GNSS-OrbitModel */
typedef struct LPP_GNSS_OrbitModel {
	LPP_GNSS_OrbitModel_PR present;
	union LPP_GNSS_OrbitModel_u {
		struct LPP_NavModelKeplerianSet	*keplerianSet;
		struct LPP_NavModelNAV_KeplerianSet	*nav_KeplerianSet;
		struct LPP_NavModelCNAV_KeplerianSet	*cnav_KeplerianSet;
		struct LPP_NavModel_GLONASS_ECEF	*glonass_ECEF;
		struct LPP_NavModel_SBAS_ECEF	*sbas_ECEF;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LPP_NavModel_BDS_KeplerianSet_r12	*bds_KeplerianSet_r12;
		struct LPP_NavModel_BDS_KeplerianSet2_r16	*bds_KeplerianSet2_r16;
		struct LPP_NavModel_NavIC_KeplerianSet_r16	*navic_KeplerianSet_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_OrbitModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_OrbitModel;
extern asn_CHOICE_specifics_t asn_SPC_LPP_GNSS_OrbitModel_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_OrbitModel_1[8];
extern asn_per_constraints_t asn_PER_type_LPP_GNSS_OrbitModel_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_OrbitModel_H_ */
#include <asn_internal.h>
