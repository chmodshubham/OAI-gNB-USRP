/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_FailureInformation-IEs.h"

asn_TYPE_member_t asn_MBR_NR_FailureInformation_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_FailureInformation_IEs, failureInfoRLC_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FailureInfoRLC_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureInfoRLC-Bearer"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_FailureInformation_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FailureInformation_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FailureInformation_v1610_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_FailureInformation_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_FailureInformation_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_FailureInformation_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureInfoRLC-Bearer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_FailureInformation_IEs_specs_1 = {
	sizeof(struct NR_FailureInformation_IEs),
	offsetof(struct NR_FailureInformation_IEs, _asn_ctx),
	asn_MAP_NR_FailureInformation_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_FailureInformation_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_FailureInformation_IEs = {
	"FailureInformation-IEs",
	"FailureInformation-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_FailureInformation_IEs_tags_1,
	sizeof(asn_DEF_NR_FailureInformation_IEs_tags_1)
		/sizeof(asn_DEF_NR_FailureInformation_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_FailureInformation_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_FailureInformation_IEs_tags_1)
		/sizeof(asn_DEF_NR_FailureInformation_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_FailureInformation_IEs_1,
	3,	/* Elements count */
	&asn_SPC_NR_FailureInformation_IEs_specs_1	/* Additional specs */
};

