/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformationBlockType4-NB-r13.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType4_NB_r13__ext1, nsss_RRM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NSSS_RRM_Config_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nsss-RRM-Config-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType4_NB_r13__ext1, intraFreqNeighCellList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IntraFreqNeighCellList_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-v1530"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nsss-RRM-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* intraFreqNeighCellList-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_SystemInformationBlockType4_NB_r13__ext1),
	offsetof(struct LTE_SystemInformationBlockType4_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_6,
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_6,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType4_NB_r13_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType4_NB_r13, intraFreqNeighCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IntraFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType4_NB_r13, intraFreqBlackCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IntraFreqBlackCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqBlackCellList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType4_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType4_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType4_NB_r13_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType4_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType4_NB_r13_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType4_NB_r13),
	offsetof(struct LTE_SystemInformationBlockType4_NB_r13, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType4_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType4_NB_r13_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType4_NB_r13 = {
	"SystemInformationBlockType4-NB-r13",
	"SystemInformationBlockType4-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType4_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType4_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType4_NB_r13_specs_1	/* Additional specs */
};

