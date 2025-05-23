/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_WLAN-RequestLocationInformation-r13.h"

static int
memb_LPP_requestedMeasurements_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LPP_requestedMeasurements_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LPP_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_WLAN_RequestLocationInformation_r13__ext1, assistanceAvailability_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistanceAvailability-r14"
		},
};
static const int asn_MAP_LPP_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* assistanceAvailability-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_6 = {
	sizeof(struct LPP_WLAN_RequestLocationInformation_r13__ext1),
	offsetof(struct LPP_WLAN_RequestLocationInformation_r13__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_6,
	sizeof(asn_DEF_LPP_ext1_tags_6)
		/sizeof(asn_DEF_LPP_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_6)
		/sizeof(asn_DEF_LPP_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_ext1_6,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_WLAN_RequestLocationInformation_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_WLAN_RequestLocationInformation_r13, requestedMeasurements_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LPP_requestedMeasurements_r13_constr_2,  memb_LPP_requestedMeasurements_r13_constraint_1 },
		0, 0, /* No default value */
		"requestedMeasurements-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_WLAN_RequestLocationInformation_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LPP_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LPP_WLAN_RequestLocationInformation_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_WLAN_RequestLocationInformation_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedMeasurements-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_WLAN_RequestLocationInformation_r13_specs_1 = {
	sizeof(struct LPP_WLAN_RequestLocationInformation_r13),
	offsetof(struct LPP_WLAN_RequestLocationInformation_r13, _asn_ctx),
	asn_MAP_LPP_WLAN_RequestLocationInformation_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_WLAN_RequestLocationInformation_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_WLAN_RequestLocationInformation_r13 = {
	"WLAN-RequestLocationInformation-r13",
	"WLAN-RequestLocationInformation-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1,
	sizeof(asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1)
		/sizeof(asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1[0]), /* 1 */
	asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1)
		/sizeof(asn_DEF_LPP_WLAN_RequestLocationInformation_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_WLAN_RequestLocationInformation_r13_1,
	2,	/* Elements count */
	&asn_SPC_LPP_WLAN_RequestLocationInformation_r13_specs_1	/* Additional specs */
};

