/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_IABTNLAddressUsage.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_IABTNLAddressUsage_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_IABTNLAddressUsage_value2enum_1[] = {
	{ 0,	4,	"f1-c" },
	{ 1,	4,	"f1-u" },
	{ 2,	6,	"non-f1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_IABTNLAddressUsage_enum2value_1[] = {
	0,	/* f1-c(0) */
	1,	/* f1-u(1) */
	2	/* non-f1(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_IABTNLAddressUsage_specs_1 = {
	asn_MAP_F1AP_IABTNLAddressUsage_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_IABTNLAddressUsage_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_IABTNLAddressUsage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_IABTNLAddressUsage = {
	"IABTNLAddressUsage",
	"IABTNLAddressUsage",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_IABTNLAddressUsage_tags_1,
	sizeof(asn_DEF_F1AP_IABTNLAddressUsage_tags_1)
		/sizeof(asn_DEF_F1AP_IABTNLAddressUsage_tags_1[0]), /* 1 */
	asn_DEF_F1AP_IABTNLAddressUsage_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_IABTNLAddressUsage_tags_1)
		/sizeof(asn_DEF_F1AP_IABTNLAddressUsage_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_IABTNLAddressUsage_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_IABTNLAddressUsage_specs_1	/* Additional specs */
};

