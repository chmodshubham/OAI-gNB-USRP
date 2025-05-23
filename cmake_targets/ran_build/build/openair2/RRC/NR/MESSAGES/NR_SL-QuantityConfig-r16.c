/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-QuantityConfig-r16.h"

static int asn_DFL_2_cmp_4(const void *sptr) {
	const NR_FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_2_set_4(void **sptr) {
	NR_FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_NR_SL_QuantityConfig_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SL_QuantityConfig_r16, sl_FilterCoefficientDMRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_2_set_4,	/* Set DEFAULT 4 */
		"sl-FilterCoefficientDMRS-r16"
		},
};
static const int asn_MAP_NR_SL_QuantityConfig_r16_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_SL_QuantityConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_QuantityConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-FilterCoefficientDMRS-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_QuantityConfig_r16_specs_1 = {
	sizeof(struct NR_SL_QuantityConfig_r16),
	offsetof(struct NR_SL_QuantityConfig_r16, _asn_ctx),
	asn_MAP_NR_SL_QuantityConfig_r16_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_SL_QuantityConfig_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_QuantityConfig_r16 = {
	"SL-QuantityConfig-r16",
	"SL-QuantityConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_QuantityConfig_r16_tags_1,
	sizeof(asn_DEF_NR_SL_QuantityConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_QuantityConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_QuantityConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_QuantityConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_QuantityConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_QuantityConfig_r16_1,
	1,	/* Elements count */
	&asn_SPC_NR_SL_QuantityConfig_r16_specs_1	/* Additional specs */
};

