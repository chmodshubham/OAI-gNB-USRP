/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_PressureValidityPeriod-v1520.h"

static int
memb_LPP_beginTimeAlt_v1520_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2881)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LPP_duration_v1520_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2881)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LPP_beginTimeAlt_v1520_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  2881 }	/* (0..2881) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_duration_v1520_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  1,  2881 }	/* (1..2881) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LPP_PressureValidityPeriod_v1520_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PressureValidityPeriod_v1520, beginTime_v1520),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SystemTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beginTime-v1520"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_PressureValidityPeriod_v1520, beginTimeAlt_v1520),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_beginTimeAlt_v1520_constr_3,  memb_LPP_beginTimeAlt_v1520_constraint_1 },
		0, 0, /* No default value */
		"beginTimeAlt-v1520"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PressureValidityPeriod_v1520, duration_v1520),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_duration_v1520_constr_4,  memb_LPP_duration_v1520_constraint_1 },
		0, 0, /* No default value */
		"duration-v1520"
		},
};
static const int asn_MAP_LPP_PressureValidityPeriod_v1520_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_PressureValidityPeriod_v1520_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* beginTime-v1520 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* beginTimeAlt-v1520 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* duration-v1520 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_PressureValidityPeriod_v1520_specs_1 = {
	sizeof(struct LPP_PressureValidityPeriod_v1520),
	offsetof(struct LPP_PressureValidityPeriod_v1520, _asn_ctx),
	asn_MAP_LPP_PressureValidityPeriod_v1520_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_PressureValidityPeriod_v1520_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_PressureValidityPeriod_v1520 = {
	"PressureValidityPeriod-v1520",
	"PressureValidityPeriod-v1520",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1,
	sizeof(asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1)
		/sizeof(asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1[0]), /* 1 */
	asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1)
		/sizeof(asn_DEF_LPP_PressureValidityPeriod_v1520_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_PressureValidityPeriod_v1520_1,
	3,	/* Elements count */
	&asn_SPC_LPP_PressureValidityPeriod_v1520_specs_1	/* Additional specs */
};

