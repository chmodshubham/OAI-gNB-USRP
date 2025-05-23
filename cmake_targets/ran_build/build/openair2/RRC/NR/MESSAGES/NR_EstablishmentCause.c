/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_EstablishmentCause.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_EstablishmentCause_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_EstablishmentCause_value2enum_1[] = {
	{ 0,	9,	"emergency" },
	{ 1,	18,	"highPriorityAccess" },
	{ 2,	9,	"mt-Access" },
	{ 3,	13,	"mo-Signalling" },
	{ 4,	7,	"mo-Data" },
	{ 5,	12,	"mo-VoiceCall" },
	{ 6,	12,	"mo-VideoCall" },
	{ 7,	6,	"mo-SMS" },
	{ 8,	18,	"mps-PriorityAccess" },
	{ 9,	18,	"mcs-PriorityAccess" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_EstablishmentCause_enum2value_1[] = {
	0,	/* emergency(0) */
	1,	/* highPriorityAccess(1) */
	9,	/* mcs-PriorityAccess(9) */
	4,	/* mo-Data(4) */
	7,	/* mo-SMS(7) */
	3,	/* mo-Signalling(3) */
	6,	/* mo-VideoCall(6) */
	5,	/* mo-VoiceCall(5) */
	8,	/* mps-PriorityAccess(8) */
	2,	/* mt-Access(2) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_EstablishmentCause_specs_1 = {
	asn_MAP_NR_EstablishmentCause_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_EstablishmentCause_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_EstablishmentCause_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_EstablishmentCause = {
	"EstablishmentCause",
	"EstablishmentCause",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_EstablishmentCause_tags_1,
	sizeof(asn_DEF_NR_EstablishmentCause_tags_1)
		/sizeof(asn_DEF_NR_EstablishmentCause_tags_1[0]), /* 1 */
	asn_DEF_NR_EstablishmentCause_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_EstablishmentCause_tags_1)
		/sizeof(asn_DEF_NR_EstablishmentCause_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_EstablishmentCause_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_EstablishmentCause_specs_1	/* Additional specs */
};

