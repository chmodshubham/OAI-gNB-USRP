/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RRCResumeRequest.h"

asn_TYPE_member_t asn_MBR_NR_RRCResumeRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCResumeRequest, rrcResumeRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCResumeRequest_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcResumeRequest"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_RRCResumeRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCResumeRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rrcResumeRequest */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResumeRequest_specs_1 = {
	sizeof(struct NR_RRCResumeRequest),
	offsetof(struct NR_RRCResumeRequest, _asn_ctx),
	asn_MAP_NR_RRCResumeRequest_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCResumeRequest = {
	"RRCResumeRequest",
	"RRCResumeRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCResumeRequest_tags_1,
	sizeof(asn_DEF_NR_RRCResumeRequest_tags_1)
		/sizeof(asn_DEF_NR_RRCResumeRequest_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCResumeRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCResumeRequest_tags_1)
		/sizeof(asn_DEF_NR_RRCResumeRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RRCResumeRequest_1,
	1,	/* Elements count */
	&asn_SPC_NR_RRCResumeRequest_specs_1	/* Additional specs */
};

