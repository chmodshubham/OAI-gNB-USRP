/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_DisplacementInfoListElement-r15.h"

#include "LPP_Displacement-r15.h"
asn_TYPE_member_t asn_MBR_LPP_DisplacementInfoListElement_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_DisplacementInfoListElement_r15, deltaTimeStamp_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_DeltaTime_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTimeStamp-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_DisplacementInfoListElement_r15, displacement_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_Displacement_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"displacement-r15"
		},
};
static const int asn_MAP_LPP_DisplacementInfoListElement_r15_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_DisplacementInfoListElement_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaTimeStamp-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* displacement-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_DisplacementInfoListElement_r15_specs_1 = {
	sizeof(struct LPP_DisplacementInfoListElement_r15),
	offsetof(struct LPP_DisplacementInfoListElement_r15, _asn_ctx),
	asn_MAP_LPP_DisplacementInfoListElement_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_DisplacementInfoListElement_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_DisplacementInfoListElement_r15 = {
	"DisplacementInfoListElement-r15",
	"DisplacementInfoListElement-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1,
	sizeof(asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1)
		/sizeof(asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1[0]), /* 1 */
	asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1)
		/sizeof(asn_DEF_LPP_DisplacementInfoListElement_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_DisplacementInfoListElement_r15_1,
	2,	/* Elements count */
	&asn_SPC_LPP_DisplacementInfoListElement_r15_specs_1	/* Additional specs */
};

