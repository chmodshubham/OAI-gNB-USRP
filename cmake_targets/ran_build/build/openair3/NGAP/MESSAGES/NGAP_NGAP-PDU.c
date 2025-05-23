/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_NGAP-PDU.h"

#include "NGAP_InitiatingMessage.h"
#include "NGAP_SuccessfulOutcome.h"
#include "NGAP_UnsuccessfulOutcome.h"
static asn_per_constraints_t asn_PER_type_NGAP_NGAP_PDU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NGAP_NGAP_PDU_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NGAP_NGAP_PDU, choice.initiatingMessage),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_InitiatingMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initiatingMessage"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_NGAP_PDU, choice.successfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_SuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"successfulOutcome"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_NGAP_PDU, choice.unsuccessfulOutcome),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_UnsuccessfulOutcome,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unsuccessfulOutcome"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_NGAP_PDU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initiatingMessage */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* successfulOutcome */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unsuccessfulOutcome */
};
static asn_CHOICE_specifics_t asn_SPC_NGAP_NGAP_PDU_specs_1 = {
	sizeof(struct NGAP_NGAP_PDU),
	offsetof(struct NGAP_NGAP_PDU, _asn_ctx),
	offsetof(struct NGAP_NGAP_PDU, present),
	sizeof(((struct NGAP_NGAP_PDU *)0)->present),
	asn_MAP_NGAP_NGAP_PDU_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_NGAP_PDU = {
	"NGAP-PDU",
	"NGAP-PDU",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NGAP_NGAP_PDU_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_NGAP_PDU_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_NGAP_PDU_specs_1	/* Additional specs */
};

