/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_LocationError.h"

asn_TYPE_member_t asn_MBR_LPP_LocationError_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_LocationError, locationfailurecause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_LocationFailureCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationfailurecause"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_LocationError_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_LocationError_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* locationfailurecause */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_LocationError_specs_1 = {
	sizeof(struct LPP_LocationError),
	offsetof(struct LPP_LocationError, _asn_ctx),
	asn_MAP_LPP_LocationError_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_LocationError = {
	"LocationError",
	"LocationError",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_LocationError_tags_1,
	sizeof(asn_DEF_LPP_LocationError_tags_1)
		/sizeof(asn_DEF_LPP_LocationError_tags_1[0]), /* 1 */
	asn_DEF_LPP_LocationError_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_LocationError_tags_1)
		/sizeof(asn_DEF_LPP_LocationError_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_LocationError_1,
	1,	/* Elements count */
	&asn_SPC_LPP_LocationError_specs_1	/* Additional specs */
};

