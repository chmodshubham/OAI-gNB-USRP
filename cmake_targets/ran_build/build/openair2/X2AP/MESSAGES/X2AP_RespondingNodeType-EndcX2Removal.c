/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/rcdu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_RespondingNodeType-EndcX2Removal.h"

asn_per_constraints_t asn_PER_type_X2AP_RespondingNodeType_EndcX2Removal_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_RespondingNodeType_EndcX2Removal_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RespondingNodeType_EndcX2Removal, choice.respond_eNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolIE_Container_8370P101,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"respond-eNB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RespondingNodeType_EndcX2Removal, choice.respond_en_gNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolIE_Container_8370P102,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"respond-en-gNB"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_RespondingNodeType_EndcX2Removal_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* respond-eNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* respond-en-gNB */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_RespondingNodeType_EndcX2Removal_specs_1 = {
	sizeof(struct X2AP_RespondingNodeType_EndcX2Removal),
	offsetof(struct X2AP_RespondingNodeType_EndcX2Removal, _asn_ctx),
	offsetof(struct X2AP_RespondingNodeType_EndcX2Removal, present),
	sizeof(((struct X2AP_RespondingNodeType_EndcX2Removal *)0)->present),
	asn_MAP_X2AP_RespondingNodeType_EndcX2Removal_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_RespondingNodeType_EndcX2Removal = {
	"RespondingNodeType-EndcX2Removal",
	"RespondingNodeType-EndcX2Removal",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_RespondingNodeType_EndcX2Removal_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_RespondingNodeType_EndcX2Removal_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_RespondingNodeType_EndcX2Removal_specs_1	/* Additional specs */
};

