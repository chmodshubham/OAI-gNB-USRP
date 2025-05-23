/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-PER -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_ABSInformationFDD.h"

#include "X2AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_X2AP_abs_pattern_info_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 40)) {
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
memb_X2AP_measurement_subset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 40)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_X2AP_numberOfCellSpecificAntennaPorts_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_abs_pattern_info_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_measurement_subset_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_value2enum_3[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_enum2value_3[] = {
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_numberOfCellSpecificAntennaPorts_specs_3 = {
	asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_3 = {
	"numberOfCellSpecificAntennaPorts",
	"numberOfCellSpecificAntennaPorts",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3,
	sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3)
		/sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3[0]) - 1, /* 1 */
	asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3,	/* Same as above */
	sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3)
		/sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_X2AP_numberOfCellSpecificAntennaPorts_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_numberOfCellSpecificAntennaPorts_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_ABSInformationFDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformationFDD, abs_pattern_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_X2AP_abs_pattern_info_constr_2,  memb_X2AP_abs_pattern_info_constraint_1 },
		0, 0, /* No default value */
		"abs-pattern-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformationFDD, numberOfCellSpecificAntennaPorts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfCellSpecificAntennaPorts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformationFDD, measurement_subset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_X2AP_measurement_subset_constr_8,  memb_X2AP_measurement_subset_constraint_1 },
		0, 0, /* No default value */
		"measurement-subset"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_ABSInformationFDD, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P101,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_ABSInformationFDD_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_ABSInformationFDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ABSInformationFDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* abs-pattern-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfCellSpecificAntennaPorts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurement-subset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_ABSInformationFDD_specs_1 = {
	sizeof(struct X2AP_ABSInformationFDD),
	offsetof(struct X2AP_ABSInformationFDD, _asn_ctx),
	asn_MAP_X2AP_ABSInformationFDD_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_ABSInformationFDD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ABSInformationFDD = {
	"ABSInformationFDD",
	"ABSInformationFDD",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_ABSInformationFDD_tags_1,
	sizeof(asn_DEF_X2AP_ABSInformationFDD_tags_1)
		/sizeof(asn_DEF_X2AP_ABSInformationFDD_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ABSInformationFDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ABSInformationFDD_tags_1)
		/sizeof(asn_DEF_X2AP_ABSInformationFDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_ABSInformationFDD_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_ABSInformationFDD_specs_1	/* Additional specs */
};

