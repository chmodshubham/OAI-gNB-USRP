/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_STEC-ResidualSatElement-r16.h"

static int
memb_LPP_b7_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -64 && value <= 63)) {
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
memb_LPP_b16_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LPP_b7_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -64,  63 }	/* (-64..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_b16_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LPP_stecResidualCorrection_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LPP_stecResidualCorrection_r16_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16, choice.b7_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_b7_r16_constr_4,  memb_LPP_b7_r16_constraint_3 },
		0, 0, /* No default value */
		"b7-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16, choice.b16_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LPP_b16_r16_constr_5,  memb_LPP_b16_r16_constraint_3 },
		0, 0, /* No default value */
		"b16-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_stecResidualCorrection_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b7-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* b16-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_LPP_stecResidualCorrection_r16_specs_3 = {
	sizeof(struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16),
	offsetof(struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16, _asn_ctx),
	offsetof(struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16, present),
	sizeof(((struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16 *)0)->present),
	asn_MAP_LPP_stecResidualCorrection_r16_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_stecResidualCorrection_r16_3 = {
	"stecResidualCorrection-r16",
	"stecResidualCorrection-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LPP_stecResidualCorrection_r16_constr_3, CHOICE_constraint },
	asn_MBR_LPP_stecResidualCorrection_r16_3,
	2,	/* Elements count */
	&asn_SPC_LPP_stecResidualCorrection_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_STEC_ResidualSatElement_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_STEC_ResidualSatElement_r16, svID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_SV_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"svID-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_STEC_ResidualSatElement_r16, stecResidualCorrection_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_stecResidualCorrection_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stecResidualCorrection-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_STEC_ResidualSatElement_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* stecResidualCorrection-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_STEC_ResidualSatElement_r16_specs_1 = {
	sizeof(struct LPP_STEC_ResidualSatElement_r16),
	offsetof(struct LPP_STEC_ResidualSatElement_r16, _asn_ctx),
	asn_MAP_LPP_STEC_ResidualSatElement_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_STEC_ResidualSatElement_r16 = {
	"STEC-ResidualSatElement-r16",
	"STEC-ResidualSatElement-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1,
	sizeof(asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1)
		/sizeof(asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1)
		/sizeof(asn_DEF_LPP_STEC_ResidualSatElement_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_STEC_ResidualSatElement_r16_1,
	2,	/* Elements count */
	&asn_SPC_LPP_STEC_ResidualSatElement_r16_specs_1	/* Additional specs */
};

