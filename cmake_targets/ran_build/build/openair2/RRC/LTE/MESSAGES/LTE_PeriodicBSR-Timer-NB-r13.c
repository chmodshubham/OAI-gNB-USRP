/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PeriodicBSR-Timer-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_PeriodicBSR_Timer_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PeriodicBSR_Timer_NB_r13_value2enum_1[] = {
	{ 0,	3,	"pp2" },
	{ 1,	3,	"pp4" },
	{ 2,	3,	"pp8" },
	{ 3,	4,	"pp16" },
	{ 4,	4,	"pp64" },
	{ 5,	5,	"pp128" },
	{ 6,	8,	"infinity" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_LTE_PeriodicBSR_Timer_NB_r13_enum2value_1[] = {
	6,	/* infinity(6) */
	5,	/* pp128(5) */
	3,	/* pp16(3) */
	0,	/* pp2(0) */
	1,	/* pp4(1) */
	4,	/* pp64(4) */
	2,	/* pp8(2) */
	7	/* spare(7) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PeriodicBSR_Timer_NB_r13_specs_1 = {
	asn_MAP_LTE_PeriodicBSR_Timer_NB_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PeriodicBSR_Timer_NB_r13_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PeriodicBSR_Timer_NB_r13 = {
	"PeriodicBSR-Timer-NB-r13",
	"PeriodicBSR-Timer-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PeriodicBSR_Timer_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_PeriodicBSR_Timer_NB_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PeriodicBSR_Timer_NB_r13_specs_1	/* Additional specs */
};

