/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-QoS-Profile-r16.h"

static int
NR_sl_GFBR_r16_3_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value <= 4000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
NR_sl_MFBR_r16_4_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value <= 4000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_sl_GFBR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value <= 4000000000)) {
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
memb_NR_sl_MFBR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value <= 4000000000)) {
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
memb_NR_sl_Range_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_sl_GFBR_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4000000000 }	/* (0..4000000000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_MFBR_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4000000000 }	/* (0..4000000000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_GFBR_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4000000000 }	/* (0..4000000000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MFBR_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4000000000 }	/* (0..4000000000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_Range_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  1000 }	/* (1..1000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_GFBR_r16_specs_3 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_NR_sl_GFBR_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_GFBR_r16_3 = {
	"sl-GFBR-r16",
	"sl-GFBR-r16",
	&asn_OP_NativeInteger,
	asn_DEF_NR_sl_GFBR_r16_tags_3,
	sizeof(asn_DEF_NR_sl_GFBR_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_GFBR_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_sl_GFBR_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_sl_GFBR_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_GFBR_r16_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_GFBR_r16_constr_3, NR_sl_GFBR_r16_3_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_sl_GFBR_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_specifics_t asn_SPC_NR_sl_MFBR_r16_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_NR_sl_MFBR_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_MFBR_r16_4 = {
	"sl-MFBR-r16",
	"sl-MFBR-r16",
	&asn_OP_NativeInteger,
	asn_DEF_NR_sl_MFBR_r16_tags_4,
	sizeof(asn_DEF_NR_sl_MFBR_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_MFBR_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_sl_MFBR_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_sl_MFBR_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_MFBR_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_MFBR_r16_constr_4, NR_sl_MFBR_r16_4_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_sl_MFBR_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_QoS_Profile_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_SL_QoS_Profile_r16, sl_PQI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_PQI_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PQI-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SL_QoS_Profile_r16, sl_GFBR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_GFBR_r16_3,
		0,
		{ 0, &asn_PER_memb_NR_sl_GFBR_r16_constr_3,  memb_NR_sl_GFBR_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-GFBR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_QoS_Profile_r16, sl_MFBR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_MFBR_r16_4,
		0,
		{ 0, &asn_PER_memb_NR_sl_MFBR_r16_constr_4,  memb_NR_sl_MFBR_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MFBR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_QoS_Profile_r16, sl_Range_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_Range_r16_constr_5,  memb_NR_sl_Range_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-Range-r16"
		},
};
static const int asn_MAP_NR_SL_QoS_Profile_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_SL_QoS_Profile_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_QoS_Profile_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-PQI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-GFBR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-MFBR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-Range-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_QoS_Profile_r16_specs_1 = {
	sizeof(struct NR_SL_QoS_Profile_r16),
	offsetof(struct NR_SL_QoS_Profile_r16, _asn_ctx),
	asn_MAP_NR_SL_QoS_Profile_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SL_QoS_Profile_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_QoS_Profile_r16 = {
	"SL-QoS-Profile-r16",
	"SL-QoS-Profile-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_QoS_Profile_r16_tags_1,
	sizeof(asn_DEF_NR_SL_QoS_Profile_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_QoS_Profile_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_QoS_Profile_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_QoS_Profile_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_QoS_Profile_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_QoS_Profile_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_SL_QoS_Profile_r16_specs_1	/* Additional specs */
};

