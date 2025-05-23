/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_PWSFailedCellIDList.h"

#include "NGAP_EUTRA-CGIList.h"
#include "NGAP_NR-CGIList.h"
#include "NGAP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_NGAP_PWSFailedCellIDList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_PWSFailedCellIDList_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NGAP_PWSFailedCellIDList, choice.eUTRA_CGI_PWSFailedList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_EUTRA_CGIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-CGI-PWSFailedList"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_PWSFailedCellIDList, choice.nR_CGI_PWSFailedList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_NR_CGIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGI-PWSFailedList"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_PWSFailedCellIDList, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_SingleContainer_6813P15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_PWSFailedCellIDList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRA-CGI-PWSFailedList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-CGI-PWSFailedList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_NGAP_PWSFailedCellIDList_specs_1 = {
	sizeof(struct NGAP_PWSFailedCellIDList),
	offsetof(struct NGAP_PWSFailedCellIDList, _asn_ctx),
	offsetof(struct NGAP_PWSFailedCellIDList, present),
	sizeof(((struct NGAP_PWSFailedCellIDList *)0)->present),
	asn_MAP_NGAP_PWSFailedCellIDList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PWSFailedCellIDList = {
	"PWSFailedCellIDList",
	"PWSFailedCellIDList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NGAP_PWSFailedCellIDList_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_PWSFailedCellIDList_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_PWSFailedCellIDList_specs_1	/* Additional specs */
};

