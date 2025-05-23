/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PLMN-IdentityInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_plmn_IdentityList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_plmn_IdentityList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_cellReservedForOperatorUse_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_iab_Support_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_plmn_IdentityList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_plmn_IdentityList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_plmn_IdentityList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_plmn_IdentityList_specs_2 = {
	sizeof(struct NR_PLMN_IdentityInfo__plmn_IdentityList),
	offsetof(struct NR_PLMN_IdentityInfo__plmn_IdentityList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_plmn_IdentityList_2 = {
	"plmn-IdentityList",
	"plmn-IdentityList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_plmn_IdentityList_tags_2,
	sizeof(asn_DEF_NR_plmn_IdentityList_tags_2)
		/sizeof(asn_DEF_NR_plmn_IdentityList_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_plmn_IdentityList_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_plmn_IdentityList_tags_2)
		/sizeof(asn_DEF_NR_plmn_IdentityList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_plmn_IdentityList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_plmn_IdentityList_2,
	1,	/* Single element */
	&asn_SPC_NR_plmn_IdentityList_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_cellReservedForOperatorUse_value2enum_7[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_NR_cellReservedForOperatorUse_enum2value_7[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_cellReservedForOperatorUse_specs_7 = {
	asn_MAP_NR_cellReservedForOperatorUse_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_cellReservedForOperatorUse_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_cellReservedForOperatorUse_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cellReservedForOperatorUse_7 = {
	"cellReservedForOperatorUse",
	"cellReservedForOperatorUse",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_cellReservedForOperatorUse_tags_7,
	sizeof(asn_DEF_NR_cellReservedForOperatorUse_tags_7)
		/sizeof(asn_DEF_NR_cellReservedForOperatorUse_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_cellReservedForOperatorUse_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_cellReservedForOperatorUse_tags_7)
		/sizeof(asn_DEF_NR_cellReservedForOperatorUse_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_NR_cellReservedForOperatorUse_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_cellReservedForOperatorUse_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_iab_Support_r16_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_iab_Support_r16_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_iab_Support_r16_specs_12 = {
	asn_MAP_NR_iab_Support_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_iab_Support_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_iab_Support_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_Support_r16_12 = {
	"iab-Support-r16",
	"iab-Support-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_iab_Support_r16_tags_12,
	sizeof(asn_DEF_NR_iab_Support_r16_tags_12)
		/sizeof(asn_DEF_NR_iab_Support_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_iab_Support_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_iab_Support_r16_tags_12)
		/sizeof(asn_DEF_NR_iab_Support_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_iab_Support_r16_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_iab_Support_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PLMN_IdentityInfo__ext1, iab_Support_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_iab_Support_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iab-Support-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* iab-Support-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_11 = {
	sizeof(struct NR_PLMN_IdentityInfo__ext1),
	offsetof(struct NR_PLMN_IdentityInfo__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_11,
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PLMN_IdentityInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PLMN_IdentityInfo, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_plmn_IdentityList_2,
		0,
		{ 0, &asn_PER_memb_NR_plmn_IdentityList_constr_2,  memb_NR_plmn_IdentityList_constraint_1 },
		0, 0, /* No default value */
		"plmn-IdentityList"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PLMN_IdentityInfo, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PLMN_IdentityInfo, ranac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RAN_AreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranac"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PLMN_IdentityInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PLMN_IdentityInfo, cellReservedForOperatorUse),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_cellReservedForOperatorUse_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReservedForOperatorUse"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PLMN_IdentityInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_PLMN_IdentityInfo_oms_1[] = { 1, 2, 5 };
static const ber_tlv_tag_t asn_DEF_NR_PLMN_IdentityInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PLMN_IdentityInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ranac */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellReservedForOperatorUse */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PLMN_IdentityInfo_specs_1 = {
	sizeof(struct NR_PLMN_IdentityInfo),
	offsetof(struct NR_PLMN_IdentityInfo, _asn_ctx),
	asn_MAP_NR_PLMN_IdentityInfo_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_PLMN_IdentityInfo_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PLMN_IdentityInfo = {
	"PLMN-IdentityInfo",
	"PLMN-IdentityInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PLMN_IdentityInfo_tags_1,
	sizeof(asn_DEF_NR_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_NR_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	asn_DEF_NR_PLMN_IdentityInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_NR_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_PLMN_IdentityInfo_1,
	6,	/* Elements count */
	&asn_SPC_NR_PLMN_IdentityInfo_specs_1	/* Additional specs */
};

