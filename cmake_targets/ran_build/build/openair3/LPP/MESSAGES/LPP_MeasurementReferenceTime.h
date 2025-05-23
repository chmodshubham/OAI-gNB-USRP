/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_MeasurementReferenceTime_H_
#define	_LPP_MeasurementReferenceTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_GNSS-ID.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_MeasurementReferenceTime__networkTime_PR {
	LPP_MeasurementReferenceTime__networkTime_PR_NOTHING,	/* No components present */
	LPP_MeasurementReferenceTime__networkTime_PR_eUTRA,
	LPP_MeasurementReferenceTime__networkTime_PR_uTRA,
	LPP_MeasurementReferenceTime__networkTime_PR_gSM,
	/* Extensions may appear below */
	LPP_MeasurementReferenceTime__networkTime_PR_nbIoT_r14,
	LPP_MeasurementReferenceTime__networkTime_PR_nr_r15
} LPP_MeasurementReferenceTime__networkTime_PR;
typedef enum LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR {
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_NOTHING,	/* No components present */
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_fdd,
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_tdd
} LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR;

/* Forward declarations */
struct LPP_CellGlobalIdEUTRA_AndUTRA;
struct LPP_CellGlobalIdGERAN;
struct LPP_ECGI;
struct LPP_NCGI_r15;

/* LPP_MeasurementReferenceTime */
typedef struct LPP_MeasurementReferenceTime {
	long	 gnss_TOD_msec;
	long	*gnss_TOD_frac;	/* OPTIONAL */
	long	*gnss_TOD_unc;	/* OPTIONAL */
	LPP_GNSS_ID_t	 gnss_TimeID;
	struct LPP_MeasurementReferenceTime__networkTime {
		LPP_MeasurementReferenceTime__networkTime_PR present;
		union LPP_MeasurementReferenceTime__LPP_networkTime_u {
			struct LPP_MeasurementReferenceTime__networkTime__eUTRA {
				long	 physCellId;
				struct LPP_CellGlobalIdEUTRA_AndUTRA	*cellGlobalId;	/* OPTIONAL */
				BIT_STRING_t	 systemFrameNumber;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eUTRA;
			struct LPP_MeasurementReferenceTime__networkTime__uTRA {
				struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode {
					LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR present;
					union LPP_MeasurementReferenceTime__LPP_networkTime__LPP_uTRA__LPP_mode_u {
						struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode__fdd {
							long	 primary_CPICH_Info;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *fdd;
						struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode__tdd {
							long	 cellParameters;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} mode;
				struct LPP_CellGlobalIdEUTRA_AndUTRA	*cellGlobalId;	/* OPTIONAL */
				long	 referenceSystemFrameNumber;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *uTRA;
			struct LPP_MeasurementReferenceTime__networkTime__gSM {
				long	 bcchCarrier;
				long	 bsic;
				struct LPP_CellGlobalIdGERAN	*cellGlobalId;	/* OPTIONAL */
				struct LPP_MeasurementReferenceTime__networkTime__gSM__referenceFrame {
					long	 referenceFN;
					long	*referenceFNMSB;	/* OPTIONAL */
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} referenceFrame;
				long	*deltaGNSS_TOD;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *gSM;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct LPP_MeasurementReferenceTime__networkTime__nbIoT_r14 {
				long	 nbPhysCellId_r14;
				struct LPP_ECGI	*nbCellGlobalId_r14;	/* OPTIONAL */
				BIT_STRING_t	 sfn_r14;
				BIT_STRING_t	*hyperSFN_r14;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nbIoT_r14;
			struct LPP_MeasurementReferenceTime__networkTime__nr_r15 {
				long	 nrPhysCellId_r15;
				struct LPP_NCGI_r15	*nrCellGlobalID_r15;	/* OPTIONAL */
				BIT_STRING_t	 nr_sfn_r15;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nr_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *networkTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_MeasurementReferenceTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MeasurementReferenceTime;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_MeasurementReferenceTime_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_MeasurementReferenceTime_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_MeasurementReferenceTime_H_ */
#include <asn_internal.h>
