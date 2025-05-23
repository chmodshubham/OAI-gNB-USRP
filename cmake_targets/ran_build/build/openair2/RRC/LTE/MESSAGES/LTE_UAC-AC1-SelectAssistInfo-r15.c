/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UAC-AC1-SelectAssistInfo-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_UAC_AC1_SelectAssistInfo_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_UAC_AC1_SelectAssistInfo_r15_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" }
};
static const unsigned int asn_MAP_LTE_UAC_AC1_SelectAssistInfo_r15_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2	/* c(2) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_UAC_AC1_SelectAssistInfo_r15_specs_1 = {
	asn_MAP_LTE_UAC_AC1_SelectAssistInfo_r15_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_UAC_AC1_SelectAssistInfo_r15_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15 = {
	"UAC-AC1-SelectAssistInfo-r15",
	"UAC-AC1-SelectAssistInfo-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1,
	sizeof(asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1)
		/sizeof(asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1)
		/sizeof(asn_DEF_LTE_UAC_AC1_SelectAssistInfo_r15_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_UAC_AC1_SelectAssistInfo_r15_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_UAC_AC1_SelectAssistInfo_r15_specs_1	/* Additional specs */
};

