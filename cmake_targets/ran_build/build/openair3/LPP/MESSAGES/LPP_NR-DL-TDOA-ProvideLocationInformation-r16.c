/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_NR-DL-TDOA-ProvideLocationInformation-r16.h"

#include "LPP_NR-DL-TDOA-SignalMeasurementInformation-r16.h"
#include "LPP_NR-DL-TDOA-LocationInformation-r16.h"
#include "LPP_NR-DL-TDOA-Error-r16.h"
asn_TYPE_member_t asn_MBR_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LPP_NR_DL_TDOA_ProvideLocationInformation_r16, nr_DL_TDOA_SignalMeasurementInformation_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_NR_DL_TDOA_SignalMeasurementInformation_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-DL-TDOA-SignalMeasurementInformation-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_NR_DL_TDOA_ProvideLocationInformation_r16, nr_dl_tdoa_LocationInformation_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_NR_DL_TDOA_LocationInformation_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-dl-tdoa-LocationInformation-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NR_DL_TDOA_ProvideLocationInformation_r16, nr_DL_TDOA_Error_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_NR_DL_TDOA_Error_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-DL-TDOA-Error-r16"
		},
};
static const int asn_MAP_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-TDOA-SignalMeasurementInformation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-dl-tdoa-LocationInformation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-DL-TDOA-Error-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_specs_1 = {
	sizeof(struct LPP_NR_DL_TDOA_ProvideLocationInformation_r16),
	offsetof(struct LPP_NR_DL_TDOA_ProvideLocationInformation_r16, _asn_ctx),
	asn_MAP_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16 = {
	"NR-DL-TDOA-ProvideLocationInformation-r16",
	"NR-DL-TDOA-ProvideLocationInformation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1,
	sizeof(asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_1,
	3,	/* Elements count */
	&asn_SPC_LPP_NR_DL_TDOA_ProvideLocationInformation_r16_specs_1	/* Additional specs */
};

