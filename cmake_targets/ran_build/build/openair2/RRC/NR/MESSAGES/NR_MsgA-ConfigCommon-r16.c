/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MsgA-ConfigCommon-r16.h"

asn_TYPE_member_t asn_MBR_NR_MsgA_ConfigCommon_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MsgA_ConfigCommon_r16, rach_ConfigCommonTwoStepRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RACH_ConfigCommonTwoStepRA_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommonTwoStepRA-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MsgA_ConfigCommon_r16, msgA_PUSCH_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MsgA_PUSCH_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgA-PUSCH-Config-r16"
		},
};
static const int asn_MAP_NR_MsgA_ConfigCommon_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MsgA_ConfigCommon_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommonTwoStepRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* msgA-PUSCH-Config-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MsgA_ConfigCommon_r16_specs_1 = {
	sizeof(struct NR_MsgA_ConfigCommon_r16),
	offsetof(struct NR_MsgA_ConfigCommon_r16, _asn_ctx),
	asn_MAP_NR_MsgA_ConfigCommon_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_MsgA_ConfigCommon_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MsgA_ConfigCommon_r16 = {
	"MsgA-ConfigCommon-r16",
	"MsgA-ConfigCommon-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1,
	sizeof(asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1)
		/sizeof(asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1)
		/sizeof(asn_DEF_NR_MsgA_ConfigCommon_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MsgA_ConfigCommon_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_MsgA_ConfigCommon_r16_specs_1	/* Additional specs */
};

