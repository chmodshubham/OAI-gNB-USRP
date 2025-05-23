/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-SignalIDs.h"

static int
memb_LPP_gnss_SignalIDs_Ext_r15_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_LPP_gnss_SignalIDs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LPP_gnss_SignalIDs_Ext_r15_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LPP_gnss_SignalIDs_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LPP_ext1_4[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_SignalIDs__ext1, gnss_SignalIDs_Ext_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LPP_gnss_SignalIDs_Ext_r15_constr_5,  memb_LPP_gnss_SignalIDs_Ext_r15_constraint_4 },
		0, 0, /* No default value */
		"gnss-SignalIDs-Ext-r15"
		},
};
static const int asn_MAP_LPP_ext1_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gnss-SignalIDs-Ext-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_4 = {
	sizeof(struct LPP_GNSS_SignalIDs__ext1),
	offsetof(struct LPP_GNSS_SignalIDs__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_4,
	sizeof(asn_DEF_LPP_ext1_tags_4)
		/sizeof(asn_DEF_LPP_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_4)
		/sizeof(asn_DEF_LPP_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_ext1_4,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_GNSS_SignalIDs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SignalIDs, gnss_SignalIDs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LPP_gnss_SignalIDs_constr_2,  memb_LPP_gnss_SignalIDs_constraint_1 },
		0, 0, /* No default value */
		"gnss-SignalIDs"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_SignalIDs, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LPP_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LPP_GNSS_SignalIDs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_GNSS_SignalIDs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_SignalIDs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SignalIDs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_SignalIDs_specs_1 = {
	sizeof(struct LPP_GNSS_SignalIDs),
	offsetof(struct LPP_GNSS_SignalIDs, _asn_ctx),
	asn_MAP_LPP_GNSS_SignalIDs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_SignalIDs_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_SignalIDs = {
	"GNSS-SignalIDs",
	"GNSS-SignalIDs",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_SignalIDs_tags_1,
	sizeof(asn_DEF_LPP_GNSS_SignalIDs_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SignalIDs_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_SignalIDs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_SignalIDs_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SignalIDs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LPP_GNSS_SignalIDs_1,
	2,	/* Elements count */
	&asn_SPC_LPP_GNSS_SignalIDs_specs_1	/* Additional specs */
};

