/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MeasDS-Config-r12.h"

static int
memb_LTE_ms40_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_LTE_ms80_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
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
memb_LTE_ms160_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
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
memb_LTE_durationFDD_r12_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5)) {
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
memb_LTE_durationTDD_r12_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_ms40_r12_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_ms80_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_ms160_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_dmtc_PeriodOffset_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_durationFDD_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_durationTDD_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  2,  5 }	/* (2..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ds_OccasionDuration_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_MeasDS_Config_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_dmtc_PeriodOffset_r12_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12, choice.ms40_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ms40_r12_constr_5,  memb_LTE_ms40_r12_constraint_4 },
		0, 0, /* No default value */
		"ms40-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12, choice.ms80_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ms80_r12_constr_6,  memb_LTE_ms80_r12_constraint_4 },
		0, 0, /* No default value */
		"ms80-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12, choice.ms160_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ms160_r12_constr_7,  memb_LTE_ms160_r12_constraint_4 },
		0, 0, /* No default value */
		"ms160-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_dmtc_PeriodOffset_r12_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ms40-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ms80-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ms160-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_dmtc_PeriodOffset_r12_specs_4 = {
	sizeof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12),
	offsetof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12, _asn_ctx),
	offsetof(struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12, present),
	sizeof(((struct LTE_MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12 *)0)->present),
	asn_MAP_LTE_dmtc_PeriodOffset_r12_tag2el_4,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dmtc_PeriodOffset_r12_4 = {
	"dmtc-PeriodOffset-r12",
	"dmtc-PeriodOffset-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_dmtc_PeriodOffset_r12_constr_4, CHOICE_constraint },
	asn_MBR_LTE_dmtc_PeriodOffset_r12_4,
	3,	/* Elements count */
	&asn_SPC_LTE_dmtc_PeriodOffset_r12_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ds_OccasionDuration_r12_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12, choice.durationFDD_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_durationFDD_r12_constr_10,  memb_LTE_durationFDD_r12_constraint_9 },
		0, 0, /* No default value */
		"durationFDD-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12, choice.durationTDD_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_durationTDD_r12_constr_11,  memb_LTE_durationTDD_r12_constraint_9 },
		0, 0, /* No default value */
		"durationTDD-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ds_OccasionDuration_r12_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* durationFDD-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* durationTDD-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_ds_OccasionDuration_r12_specs_9 = {
	sizeof(struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12),
	offsetof(struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12, _asn_ctx),
	offsetof(struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12, present),
	sizeof(((struct LTE_MeasDS_Config_r12__setup__ds_OccasionDuration_r12 *)0)->present),
	asn_MAP_LTE_ds_OccasionDuration_r12_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ds_OccasionDuration_r12_9 = {
	"ds-OccasionDuration-r12",
	"ds-OccasionDuration-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_ds_OccasionDuration_r12_constr_9, CHOICE_constraint },
	asn_MBR_LTE_ds_OccasionDuration_r12_9,
	2,	/* Elements count */
	&asn_SPC_LTE_ds_OccasionDuration_r12_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup, dmtc_PeriodOffset_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_dmtc_PeriodOffset_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmtc-PeriodOffset-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12__setup, ds_OccasionDuration_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_ds_OccasionDuration_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ds-OccasionDuration-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasDS_Config_r12__setup, measCSI_RS_ToRemoveList_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasCSI_RS_ToRemoveList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCSI-RS-ToRemoveList-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasDS_Config_r12__setup, measCSI_RS_ToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasCSI_RS_ToAddModList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measCSI-RS-ToAddModList-r12"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dmtc-PeriodOffset-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ds-OccasionDuration-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measCSI-RS-ToRemoveList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measCSI-RS-ToAddModList-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_MeasDS_Config_r12__setup),
	offsetof(struct LTE_MeasDS_Config_r12__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	4,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasDS_Config_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasDS_Config_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasDS_Config_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_MeasDS_Config_r12_specs_1 = {
	sizeof(struct LTE_MeasDS_Config_r12),
	offsetof(struct LTE_MeasDS_Config_r12, _asn_ctx),
	offsetof(struct LTE_MeasDS_Config_r12, present),
	sizeof(((struct LTE_MeasDS_Config_r12 *)0)->present),
	asn_MAP_LTE_MeasDS_Config_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasDS_Config_r12 = {
	"MeasDS-Config-r12",
	"MeasDS-Config-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_MeasDS_Config_r12_constr_1, CHOICE_constraint },
	asn_MBR_LTE_MeasDS_Config_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_MeasDS_Config_r12_specs_1	/* Additional specs */
};

