/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SIB4.h"

static asn_TYPE_member_t asn_MBR_NR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4__ext1, interFreqCarrierFreqList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1610"
		},
};
static const int asn_MAP_NR_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqList-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_5 = {
	sizeof(struct NR_SIB4__ext1),
	offsetof(struct NR_SIB4__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_5,
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SIB4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB4, interFreqCarrierFreqList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB4, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_SIB4_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SIB4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SIB4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SIB4_specs_1 = {
	sizeof(struct NR_SIB4),
	offsetof(struct NR_SIB4, _asn_ctx),
	asn_MAP_NR_SIB4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SIB4_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB4 = {
	"SIB4",
	"SIB4",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SIB4_tags_1,
	sizeof(asn_DEF_NR_SIB4_tags_1)
		/sizeof(asn_DEF_NR_SIB4_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB4_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB4_tags_1)
		/sizeof(asn_DEF_NR_SIB4_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SIB4_1,
	3,	/* Elements count */
	&asn_SPC_NR_SIB4_specs_1	/* Additional specs */
};

