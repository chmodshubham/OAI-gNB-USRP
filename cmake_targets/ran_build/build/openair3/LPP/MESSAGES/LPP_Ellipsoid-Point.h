/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_Ellipsoid_Point_H_
#define	_LPP_Ellipsoid_Point_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_Ellipsoid_Point__latitudeSign {
	LPP_Ellipsoid_Point__latitudeSign_north	= 0,
	LPP_Ellipsoid_Point__latitudeSign_south	= 1
} e_LPP_Ellipsoid_Point__latitudeSign;

/* LPP_Ellipsoid-Point */
typedef struct LPP_Ellipsoid_Point {
	long	 latitudeSign;
	long	 degreesLatitude;
	long	 degreesLongitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_Ellipsoid_Point_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_latitudeSign_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_Ellipsoid_Point;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_Ellipsoid_Point_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_Ellipsoid_Point_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_Ellipsoid_Point_H_ */
#include <asn_internal.h>
