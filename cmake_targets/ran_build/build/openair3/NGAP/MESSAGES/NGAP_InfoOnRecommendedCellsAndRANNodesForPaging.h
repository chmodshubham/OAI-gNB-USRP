/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_H_
#define	_NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_RecommendedCellsForPaging.h"
#include "NGAP_RecommendedRANNodesForPaging.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_InfoOnRecommendedCellsAndRANNodesForPaging */
typedef struct NGAP_InfoOnRecommendedCellsAndRANNodesForPaging {
	NGAP_RecommendedCellsForPaging_t	 recommendedCellsForPaging;
	NGAP_RecommendedRANNodesForPaging_t	 recommendRANNodesForPaging;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_InfoOnRecommendedCellsAndRANNodesForPaging;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_InfoOnRecommendedCellsAndRANNodesForPaging_H_ */
#include <asn_internal.h>
