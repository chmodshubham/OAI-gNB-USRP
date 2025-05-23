/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SCellToAddModExt-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_srs_SwitchFromServCellIndex_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_sCellState_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_srs_SwitchFromServCellIndex_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_sCellState_r15_value2enum_5[] = {
	{ 0,	9,	"activated" },
	{ 1,	7,	"dormant" }
};
static const unsigned int asn_MAP_LTE_sCellState_r15_enum2value_5[] = {
	0,	/* activated(0) */
	1	/* dormant(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_sCellState_r15_specs_5 = {
	asn_MAP_LTE_sCellState_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_sCellState_r15_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_sCellState_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_sCellState_r15_5 = {
	"sCellState-r15",
	"sCellState-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_sCellState_r15_tags_5,
	sizeof(asn_DEF_LTE_sCellState_r15_tags_5)
		/sizeof(asn_DEF_LTE_sCellState_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_sCellState_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_sCellState_r15_tags_5)
		/sizeof(asn_DEF_LTE_sCellState_r15_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_sCellState_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_sCellState_r15_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_4[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SCellToAddModExt_v1430__ext1, sCellState_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_sCellState_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellState-r15"
		},
};
static const int asn_MAP_LTE_ext1_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sCellState-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_4 = {
	sizeof(struct LTE_SCellToAddModExt_v1430__ext1),
	offsetof(struct LTE_SCellToAddModExt_v1430__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_4,
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_4,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SCellToAddModExt_v1430_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SCellToAddModExt_v1430, srs_SwitchFromServCellIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_srs_SwitchFromServCellIndex_r14_constr_2,  memb_LTE_srs_SwitchFromServCellIndex_r14_constraint_1 },
		0, 0, /* No default value */
		"srs-SwitchFromServCellIndex-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCellToAddModExt_v1430, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SCellToAddModExt_v1430_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SCellToAddModExt_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCellToAddModExt_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-SwitchFromServCellIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SCellToAddModExt_v1430_specs_1 = {
	sizeof(struct LTE_SCellToAddModExt_v1430),
	offsetof(struct LTE_SCellToAddModExt_v1430, _asn_ctx),
	asn_MAP_LTE_SCellToAddModExt_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SCellToAddModExt_v1430_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCellToAddModExt_v1430 = {
	"SCellToAddModExt-v1430",
	"SCellToAddModExt-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SCellToAddModExt_v1430_tags_1,
	sizeof(asn_DEF_LTE_SCellToAddModExt_v1430_tags_1)
		/sizeof(asn_DEF_LTE_SCellToAddModExt_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_SCellToAddModExt_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SCellToAddModExt_v1430_tags_1)
		/sizeof(asn_DEF_LTE_SCellToAddModExt_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SCellToAddModExt_v1430_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SCellToAddModExt_v1430_specs_1	/* Additional specs */
};

