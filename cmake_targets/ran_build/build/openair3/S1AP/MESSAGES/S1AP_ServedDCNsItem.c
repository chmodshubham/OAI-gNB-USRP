/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_ServedDCNsItem.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_ServedDCNsItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_ServedDCNsItem, dCN_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_DCN_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dCN-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_ServedDCNsItem, relativeDCNCapacity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RelativeMMECapacity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"relativeDCNCapacity"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_ServedDCNsItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_ServedDCNsItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_ServedDCNsItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_ServedDCNsItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dCN-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* relativeDCNCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_ServedDCNsItem_specs_1 = {
	sizeof(struct S1AP_ServedDCNsItem),
	offsetof(struct S1AP_ServedDCNsItem, _asn_ctx),
	asn_MAP_S1AP_ServedDCNsItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_ServedDCNsItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ServedDCNsItem = {
	"ServedDCNsItem",
	"ServedDCNsItem",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_ServedDCNsItem_tags_1,
	sizeof(asn_DEF_S1AP_ServedDCNsItem_tags_1)
		/sizeof(asn_DEF_S1AP_ServedDCNsItem_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ServedDCNsItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ServedDCNsItem_tags_1)
		/sizeof(asn_DEF_S1AP_ServedDCNsItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_ServedDCNsItem_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_ServedDCNsItem_specs_1	/* Additional specs */
};

