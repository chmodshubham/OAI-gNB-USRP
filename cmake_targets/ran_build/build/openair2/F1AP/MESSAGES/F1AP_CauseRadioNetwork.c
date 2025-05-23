/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rcdu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_CauseRadioNetwork.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  10 }	/* (0..10,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	14,	"rl-failure-rlc" },
	{ 2,	46,	"unknown-or-already-allocated-gnb-cu-ue-f1ap-id" },
	{ 3,	46,	"unknown-or-already-allocated-gnb-du-ue-f1ap-id" },
	{ 4,	42,	"unknown-or-inconsistent-pair-of-ue-f1ap-id" },
	{ 5,	32,	"interaction-with-other-procedure" },
	{ 6,	23,	"not-supported-qci-Value" },
	{ 7,	34,	"action-desirable-for-radio-reasons" },
	{ 8,	28,	"no-radio-resources-available" },
	{ 9,	19,	"procedure-cancelled" },
	{ 10,	14,	"normal-release" },
	{ 11,	18,	"cell-not-available" },
	{ 12,	17,	"rl-failure-others" },
	{ 13,	12,	"ue-rejection" },
	{ 14,	37,	"resources-not-available-for-the-slice" },
	{ 15,	30,	"amf-initiated-abnormal-release" },
	{ 16,	26,	"release-due-to-pre-emption" },
	{ 17,	29,	"plmn-not-served-by-the-gNB-CU" },
	{ 18,	25,	"multiple-drb-id-instances" },
	{ 19,	14,	"unknown-drb-id" },
	{ 20,	31,	"multiple-bh-rlc-ch-id-instances" },
	{ 21,	20,	"unknown-bh-rlc-ch-id" },
	{ 22,	29,	"cho-cpc-resources-tobechanged" },
	{ 23,	17,	"nPN-not-supported" },
	{ 24,	17,	"nPN-access-denied" },
	{ 25,	29,	"gNB-CU-Cell-Capacity-Exceeded" },
	{ 26,	28,	"report-characteristics-empty" },
	{ 27,	23,	"existing-measurement-ID" },
	{ 28,	37,	"measurement-temporarily-not-available" },
	{ 29,	40,	"measurement-not-supported-for-the-object" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_CauseRadioNetwork_enum2value_1[] = {
	7,	/* action-desirable-for-radio-reasons(7) */
	15,	/* amf-initiated-abnormal-release(15) */
	11,	/* cell-not-available(11) */
	22,	/* cho-cpc-resources-tobechanged(22) */
	27,	/* existing-measurement-ID(27) */
	25,	/* gNB-CU-Cell-Capacity-Exceeded(25) */
	5,	/* interaction-with-other-procedure(5) */
	29,	/* measurement-not-supported-for-the-object(29) */
	28,	/* measurement-temporarily-not-available(28) */
	20,	/* multiple-bh-rlc-ch-id-instances(20) */
	18,	/* multiple-drb-id-instances(18) */
	24,	/* nPN-access-denied(24) */
	23,	/* nPN-not-supported(23) */
	8,	/* no-radio-resources-available(8) */
	10,	/* normal-release(10) */
	6,	/* not-supported-qci-Value(6) */
	17,	/* plmn-not-served-by-the-gNB-CU(17) */
	9,	/* procedure-cancelled(9) */
	16,	/* release-due-to-pre-emption(16) */
	26,	/* report-characteristics-empty(26) */
	14,	/* resources-not-available-for-the-slice(14) */
	12,	/* rl-failure-others(12) */
	1,	/* rl-failure-rlc(1) */
	13,	/* ue-rejection(13) */
	21,	/* unknown-bh-rlc-ch-id(21) */
	19,	/* unknown-drb-id(19) */
	2,	/* unknown-or-already-allocated-gnb-cu-ue-f1ap-id(2) */
	3,	/* unknown-or-already-allocated-gnb-du-ue-f1ap-id(3) */
	4,	/* unknown-or-inconsistent-pair-of-ue-f1ap-id(4) */
	0	/* unspecified(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_CauseRadioNetwork_specs_1 = {
	asn_MAP_F1AP_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	30,	/* Number of elements in the maps */
	12,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_CauseRadioNetwork = {
	"CauseRadioNetwork",
	"CauseRadioNetwork",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_F1AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_F1AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_F1AP_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_F1AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_CauseRadioNetwork_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_CauseRadioNetwork_specs_1	/* Additional specs */
};

