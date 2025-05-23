/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MeasObjectUTRA.h"

static asn_per_constraints_t asn_PER_type_LTE_cellsToAddModList_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_cellForWhichToReportCGI_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_3_cmp_0(const void *sptr) {
	const LTE_Q_OffsetRangeInterRAT_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_3_set_0(void **sptr) {
	LTE_Q_OffsetRangeInterRAT_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static asn_TYPE_member_t asn_MBR_LTE_cellsToAddModList_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasObjectUTRA__cellsToAddModList, choice.cellsToAddModListUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellsToAddModListUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModListUTRA-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasObjectUTRA__cellsToAddModList, choice.cellsToAddModListUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellsToAddModListUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModListUTRA-TDD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cellsToAddModList_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellsToAddModListUTRA-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellsToAddModListUTRA-TDD */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_cellsToAddModList_specs_5 = {
	sizeof(struct LTE_MeasObjectUTRA__cellsToAddModList),
	offsetof(struct LTE_MeasObjectUTRA__cellsToAddModList, _asn_ctx),
	offsetof(struct LTE_MeasObjectUTRA__cellsToAddModList, present),
	sizeof(((struct LTE_MeasObjectUTRA__cellsToAddModList *)0)->present),
	asn_MAP_LTE_cellsToAddModList_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellsToAddModList_5 = {
	"cellsToAddModList",
	"cellsToAddModList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_cellsToAddModList_constr_5, CHOICE_constraint },
	asn_MBR_LTE_cellsToAddModList_5,
	2,	/* Elements count */
	&asn_SPC_LTE_cellsToAddModList_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cellForWhichToReportCGI_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasObjectUTRA__cellForWhichToReportCGI, choice.utra_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellIdUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasObjectUTRA__cellForWhichToReportCGI, choice.utra_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellIdUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-TDD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cellForWhichToReportCGI_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utra-TDD */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_cellForWhichToReportCGI_specs_8 = {
	sizeof(struct LTE_MeasObjectUTRA__cellForWhichToReportCGI),
	offsetof(struct LTE_MeasObjectUTRA__cellForWhichToReportCGI, _asn_ctx),
	offsetof(struct LTE_MeasObjectUTRA__cellForWhichToReportCGI, present),
	sizeof(((struct LTE_MeasObjectUTRA__cellForWhichToReportCGI *)0)->present),
	asn_MAP_LTE_cellForWhichToReportCGI_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellForWhichToReportCGI_8 = {
	"cellForWhichToReportCGI",
	"cellForWhichToReportCGI",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_cellForWhichToReportCGI_constr_8, CHOICE_constraint },
	asn_MBR_LTE_cellForWhichToReportCGI_8,
	2,	/* Elements count */
	&asn_SPC_LTE_cellForWhichToReportCGI_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_12[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasObjectUTRA__ext1, csg_allowedReportingCells_v930),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSG_AllowedReportingCells_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csg-allowedReportingCells-v930"
		},
};
static const int asn_MAP_LTE_ext1_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csg-allowedReportingCells-v930 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_12 = {
	sizeof(struct LTE_MeasObjectUTRA__ext1),
	offsetof(struct LTE_MeasObjectUTRA__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_12 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_12,
	sizeof(asn_DEF_LTE_ext1_tags_12)
		/sizeof(asn_DEF_LTE_ext1_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_12)
		/sizeof(asn_DEF_LTE_ext1_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_12,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_14[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasObjectUTRA__ext2, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMeasPerformance-r12"
		},
};
static const int asn_MAP_LTE_ext2_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reducedMeasPerformance-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_14 = {
	sizeof(struct LTE_MeasObjectUTRA__ext2),
	offsetof(struct LTE_MeasObjectUTRA__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_14 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_14,
	sizeof(asn_DEF_LTE_ext2_tags_14)
		/sizeof(asn_DEF_LTE_ext2_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_14)
		/sizeof(asn_DEF_LTE_ext2_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_14,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasObjectUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasObjectUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 6, offsetof(struct LTE_MeasObjectUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_OffsetRangeInterRAT,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_3_set_0,	/* Set DEFAULT 0 */
		"offsetFreq"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MeasObjectUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellIndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasObjectUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_cellsToAddModList_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellsToAddModList"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasObjectUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_cellForWhichToReportCGI_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasObjectUTRA, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext1_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasObjectUTRA, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext2_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_LTE_MeasObjectUTRA_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_MeasObjectUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasObjectUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasObjectUTRA_specs_1 = {
	sizeof(struct LTE_MeasObjectUTRA),
	offsetof(struct LTE_MeasObjectUTRA, _asn_ctx),
	asn_MAP_LTE_MeasObjectUTRA_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_MeasObjectUTRA_oms_1,	/* Optional members */
	4, 2,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasObjectUTRA = {
	"MeasObjectUTRA",
	"MeasObjectUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasObjectUTRA_tags_1,
	sizeof(asn_DEF_LTE_MeasObjectUTRA_tags_1)
		/sizeof(asn_DEF_LTE_MeasObjectUTRA_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasObjectUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasObjectUTRA_tags_1)
		/sizeof(asn_DEF_LTE_MeasObjectUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasObjectUTRA_1,
	7,	/* Elements count */
	&asn_SPC_LTE_MeasObjectUTRA_specs_1	/* Additional specs */
};

