/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SupportedBandEUTRA.h"

asn_TYPE_member_t asn_MBR_LTE_SupportedBandEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SupportedBandEUTRA, bandEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicator,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SupportedBandEUTRA, halfDuplex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"halfDuplex"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SupportedBandEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SupportedBandEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* halfDuplex */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SupportedBandEUTRA_specs_1 = {
	sizeof(struct LTE_SupportedBandEUTRA),
	offsetof(struct LTE_SupportedBandEUTRA, _asn_ctx),
	asn_MAP_LTE_SupportedBandEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandEUTRA = {
	"SupportedBandEUTRA",
	"SupportedBandEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SupportedBandEUTRA_tags_1,
	sizeof(asn_DEF_LTE_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandEUTRA_tags_1[0]), /* 1 */
	asn_DEF_LTE_SupportedBandEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SupportedBandEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SupportedBandEUTRA_specs_1	/* Additional specs */
};

