/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RLF-Report-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_timeConnFailure_r16_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_previousPCellId_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_nrFailedPCellId_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_eutraFailedPCellId_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_failedPCellId_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_reconnectCellId_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_connectionFailureType_r16_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_rlf_Cause_r16_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_noSuitableCellFound_r16_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_timeConnFailure_r16_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_NR_RLF_Report_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_measResultNeighCells_r16_4[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__measResultNeighCells_r16, measResultListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2NR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__measResultNeighCells_r16, measResultListEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2EUTRA_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-r16"
		},
};
static const int asn_MAP_NR_measResultNeighCells_r16_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_measResultNeighCells_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_measResultNeighCells_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultListEUTRA-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_measResultNeighCells_r16_specs_4 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__measResultNeighCells_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__measResultNeighCells_r16, _asn_ctx),
	asn_MAP_NR_measResultNeighCells_r16_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_NR_measResultNeighCells_r16_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measResultNeighCells_r16_4 = {
	"measResultNeighCells-r16",
	"measResultNeighCells-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_measResultNeighCells_r16_tags_4,
	sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4)
		/sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_measResultNeighCells_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4)
		/sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_measResultNeighCells_r16_4,
	2,	/* Elements count */
	&asn_SPC_NR_measResultNeighCells_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_previousPCellId_r16_8[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16, choice.nrPreviousCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_Info_Logging_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrPreviousCell-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16, choice.eutraPreviousCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_InfoEUTRALogging,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutraPreviousCell-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_previousPCellId_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrPreviousCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutraPreviousCell-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_previousPCellId_r16_specs_8 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16, present),
	sizeof(((struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16 *)0)->present),
	asn_MAP_NR_previousPCellId_r16_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_previousPCellId_r16_8 = {
	"previousPCellId-r16",
	"previousPCellId-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_previousPCellId_r16_constr_8, CHOICE_constraint },
	asn_MBR_NR_previousPCellId_r16_8,
	2,	/* Elements count */
	&asn_SPC_NR_previousPCellId_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_pci_arfcn_r16_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16__pci_arfcn_r16, physCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16__pci_arfcn_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_pci_arfcn_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_pci_arfcn_r16_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_pci_arfcn_r16_specs_14 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16__pci_arfcn_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16__pci_arfcn_r16, _asn_ctx),
	asn_MAP_NR_pci_arfcn_r16_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pci_arfcn_r16_14 = {
	"pci-arfcn-r16",
	"pci-arfcn-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_pci_arfcn_r16_tags_14,
	sizeof(asn_DEF_NR_pci_arfcn_r16_tags_14)
		/sizeof(asn_DEF_NR_pci_arfcn_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_pci_arfcn_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_pci_arfcn_r16_tags_14)
		/sizeof(asn_DEF_NR_pci_arfcn_r16_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_pci_arfcn_r16_14,
	2,	/* Elements count */
	&asn_SPC_NR_pci_arfcn_r16_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_nrFailedPCellId_r16_12[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16, choice.cellGlobalId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_Info_Logging_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGlobalId-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16, choice.pci_arfcn_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_pci_arfcn_r16_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pci-arfcn-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_nrFailedPCellId_r16_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pci-arfcn-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_nrFailedPCellId_r16_specs_12 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16, present),
	sizeof(((struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16 *)0)->present),
	asn_MAP_NR_nrFailedPCellId_r16_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nrFailedPCellId_r16_12 = {
	"nrFailedPCellId-r16",
	"nrFailedPCellId-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_nrFailedPCellId_r16_constr_12, CHOICE_constraint },
	asn_MBR_NR_nrFailedPCellId_r16_12,
	2,	/* Elements count */
	&asn_SPC_NR_nrFailedPCellId_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_pci_arfcn_r16_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16__pci_arfcn_r16, physCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_EUTRA_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16__pci_arfcn_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_pci_arfcn_r16_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_pci_arfcn_r16_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_pci_arfcn_r16_specs_19 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16__pci_arfcn_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16__pci_arfcn_r16, _asn_ctx),
	asn_MAP_NR_pci_arfcn_r16_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pci_arfcn_r16_19 = {
	"pci-arfcn-r16",
	"pci-arfcn-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_pci_arfcn_r16_tags_19,
	sizeof(asn_DEF_NR_pci_arfcn_r16_tags_19)
		/sizeof(asn_DEF_NR_pci_arfcn_r16_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_pci_arfcn_r16_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_pci_arfcn_r16_tags_19)
		/sizeof(asn_DEF_NR_pci_arfcn_r16_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_pci_arfcn_r16_19,
	2,	/* Elements count */
	&asn_SPC_NR_pci_arfcn_r16_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eutraFailedPCellId_r16_17[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16, choice.cellGlobalId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_InfoEUTRALogging,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGlobalId-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16, choice.pci_arfcn_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_pci_arfcn_r16_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pci-arfcn-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eutraFailedPCellId_r16_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pci-arfcn-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_eutraFailedPCellId_r16_specs_17 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16, present),
	sizeof(((struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16 *)0)->present),
	asn_MAP_NR_eutraFailedPCellId_r16_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eutraFailedPCellId_r16_17 = {
	"eutraFailedPCellId-r16",
	"eutraFailedPCellId-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_eutraFailedPCellId_r16_constr_17, CHOICE_constraint },
	asn_MBR_NR_eutraFailedPCellId_r16_17,
	2,	/* Elements count */
	&asn_SPC_NR_eutraFailedPCellId_r16_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_failedPCellId_r16_11[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16, choice.nrFailedPCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_nrFailedPCellId_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrFailedPCellId-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16, choice.eutraFailedPCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_eutraFailedPCellId_r16_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutraFailedPCellId-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_failedPCellId_r16_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrFailedPCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutraFailedPCellId-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_failedPCellId_r16_specs_11 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16, present),
	sizeof(((struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16 *)0)->present),
	asn_MAP_NR_failedPCellId_r16_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failedPCellId_r16_11 = {
	"failedPCellId-r16",
	"failedPCellId-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_failedPCellId_r16_constr_11, CHOICE_constraint },
	asn_MBR_NR_failedPCellId_r16_11,
	2,	/* Elements count */
	&asn_SPC_NR_failedPCellId_r16_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_reconnectCellId_r16_22[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16, choice.nrReconnectCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_Info_Logging_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrReconnectCellId-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16, choice.eutraReconnectCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_InfoEUTRALogging,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutraReconnectCellId-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_reconnectCellId_r16_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrReconnectCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutraReconnectCellId-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_reconnectCellId_r16_specs_22 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16, present),
	sizeof(((struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16 *)0)->present),
	asn_MAP_NR_reconnectCellId_r16_tag2el_22,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reconnectCellId_r16_22 = {
	"reconnectCellId-r16",
	"reconnectCellId-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_reconnectCellId_r16_constr_22, CHOICE_constraint },
	asn_MBR_NR_reconnectCellId_r16_22,
	2,	/* Elements count */
	&asn_SPC_NR_reconnectCellId_r16_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_connectionFailureType_r16_value2enum_29[] = {
	{ 0,	3,	"rlf" },
	{ 1,	3,	"hof" }
};
static const unsigned int asn_MAP_NR_connectionFailureType_r16_enum2value_29[] = {
	1,	/* hof(1) */
	0	/* rlf(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_connectionFailureType_r16_specs_29 = {
	asn_MAP_NR_connectionFailureType_r16_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_connectionFailureType_r16_enum2value_29,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_connectionFailureType_r16_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_connectionFailureType_r16_29 = {
	"connectionFailureType-r16",
	"connectionFailureType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_connectionFailureType_r16_tags_29,
	sizeof(asn_DEF_NR_connectionFailureType_r16_tags_29)
		/sizeof(asn_DEF_NR_connectionFailureType_r16_tags_29[0]) - 1, /* 1 */
	asn_DEF_NR_connectionFailureType_r16_tags_29,	/* Same as above */
	sizeof(asn_DEF_NR_connectionFailureType_r16_tags_29)
		/sizeof(asn_DEF_NR_connectionFailureType_r16_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_NR_connectionFailureType_r16_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_connectionFailureType_r16_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_rlf_Cause_r16_value2enum_32[] = {
	{ 0,	11,	"t310-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	26,	"beamFailureRecoveryFailure" },
	{ 4,	14,	"lbtFailure-r16" },
	{ 5,	21,	"bh-rlfRecoveryFailure" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_rlf_Cause_r16_enum2value_32[] = {
	3,	/* beamFailureRecoveryFailure(3) */
	5,	/* bh-rlfRecoveryFailure(5) */
	4,	/* lbtFailure-r16(4) */
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	0	/* t310-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_rlf_Cause_r16_specs_32 = {
	asn_MAP_NR_rlf_Cause_r16_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_rlf_Cause_r16_enum2value_32,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_rlf_Cause_r16_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_rlf_Cause_r16_32 = {
	"rlf-Cause-r16",
	"rlf-Cause-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_rlf_Cause_r16_tags_32,
	sizeof(asn_DEF_NR_rlf_Cause_r16_tags_32)
		/sizeof(asn_DEF_NR_rlf_Cause_r16_tags_32[0]) - 1, /* 1 */
	asn_DEF_NR_rlf_Cause_r16_tags_32,	/* Same as above */
	sizeof(asn_DEF_NR_rlf_Cause_r16_tags_32)
		/sizeof(asn_DEF_NR_rlf_Cause_r16_tags_32[0]), /* 2 */
	{ 0, &asn_PER_type_NR_rlf_Cause_r16_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_rlf_Cause_r16_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_noSuitableCellFound_r16_value2enum_42[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_noSuitableCellFound_r16_enum2value_42[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_noSuitableCellFound_r16_specs_42 = {
	asn_MAP_NR_noSuitableCellFound_r16_value2enum_42,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_noSuitableCellFound_r16_enum2value_42,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_noSuitableCellFound_r16_tags_42[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_noSuitableCellFound_r16_42 = {
	"noSuitableCellFound-r16",
	"noSuitableCellFound-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_noSuitableCellFound_r16_tags_42,
	sizeof(asn_DEF_NR_noSuitableCellFound_r16_tags_42)
		/sizeof(asn_DEF_NR_noSuitableCellFound_r16_tags_42[0]) - 1, /* 1 */
	asn_DEF_NR_noSuitableCellFound_r16_tags_42,	/* Same as above */
	sizeof(asn_DEF_NR_noSuitableCellFound_r16_tags_42)
		/sizeof(asn_DEF_NR_noSuitableCellFound_r16_tags_42[0]), /* 2 */
	{ 0, &asn_PER_type_NR_noSuitableCellFound_r16_constr_42, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_noSuitableCellFound_r16_specs_42	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_nr_RLF_Report_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, measResultLastServCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultRLFNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultLastServCell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, measResultNeighCells_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_measResultNeighCells_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, c_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c-RNTI-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, previousPCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_previousPCellId_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"previousPCellId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, failedPCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_failedPCellId_r16_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedPCellId-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, reconnectCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_reconnectCellId_r16_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reconnectCellId-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, timeUntilReconnection_16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeUntilReconnection_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeUntilReconnection-16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, reestablishmentCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_Info_Logging_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishmentCellId-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, timeConnFailure_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_timeConnFailure_r16_constr_27,  memb_NR_timeConnFailure_r16_constraint_2 },
		0, 0, /* No default value */
		"timeConnFailure-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, timeSinceFailure_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeSinceFailure_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeSinceFailure-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, connectionFailureType_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_connectionFailureType_r16_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectionFailureType-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, rlf_Cause_r16),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_rlf_Cause_r16_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-Cause-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, locationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_LocationInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, noSuitableCellFound_r16),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_noSuitableCellFound_r16_42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"noSuitableCellFound-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, ra_InformationCommon_r16),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RA_InformationCommon_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-InformationCommon-r16"
		},
};
static const int asn_MAP_NR_nr_RLF_Report_r16_oms_2[] = { 1, 3, 5, 6, 7, 8, 12, 13, 14 };
static const ber_tlv_tag_t asn_DEF_NR_nr_RLF_Report_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_nr_RLF_Report_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultLastServCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultNeighCells-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* c-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* previousPCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* failedPCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* reconnectCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* timeUntilReconnection-16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* reestablishmentCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* timeConnFailure-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* timeSinceFailure-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* connectionFailureType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rlf-Cause-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* locationInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* noSuitableCellFound-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* ra-InformationCommon-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nr_RLF_Report_r16_specs_2 = {
	sizeof(struct NR_RLF_Report_r16__nr_RLF_Report_r16),
	offsetof(struct NR_RLF_Report_r16__nr_RLF_Report_r16, _asn_ctx),
	asn_MAP_NR_nr_RLF_Report_r16_tag2el_2,
	15,	/* Count of tags in the map */
	asn_MAP_NR_nr_RLF_Report_r16_oms_2,	/* Optional members */
	9, 0,	/* Root/Additions */
	15,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nr_RLF_Report_r16_2 = {
	"nr-RLF-Report-r16",
	"nr-RLF-Report-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nr_RLF_Report_r16_tags_2,
	sizeof(asn_DEF_NR_nr_RLF_Report_r16_tags_2)
		/sizeof(asn_DEF_NR_nr_RLF_Report_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_nr_RLF_Report_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_nr_RLF_Report_r16_tags_2)
		/sizeof(asn_DEF_NR_nr_RLF_Report_r16_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_nr_RLF_Report_r16_2,
	15,	/* Elements count */
	&asn_SPC_NR_nr_RLF_Report_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eutra_RLF_Report_r16_46[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__eutra_RLF_Report_r16, failedPCellId_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_InfoEUTRALogging,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedPCellId-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RLF_Report_r16__eutra_RLF_Report_r16, measResult_RLF_Report_EUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult-RLF-Report-EUTRA-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eutra_RLF_Report_r16_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eutra_RLF_Report_r16_tag2el_46[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedPCellId-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResult-RLF-Report-EUTRA-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eutra_RLF_Report_r16_specs_46 = {
	sizeof(struct NR_RLF_Report_r16__eutra_RLF_Report_r16),
	offsetof(struct NR_RLF_Report_r16__eutra_RLF_Report_r16, _asn_ctx),
	asn_MAP_NR_eutra_RLF_Report_r16_tag2el_46,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eutra_RLF_Report_r16_46 = {
	"eutra-RLF-Report-r16",
	"eutra-RLF-Report-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eutra_RLF_Report_r16_tags_46,
	sizeof(asn_DEF_NR_eutra_RLF_Report_r16_tags_46)
		/sizeof(asn_DEF_NR_eutra_RLF_Report_r16_tags_46[0]) - 1, /* 1 */
	asn_DEF_NR_eutra_RLF_Report_r16_tags_46,	/* Same as above */
	sizeof(asn_DEF_NR_eutra_RLF_Report_r16_tags_46)
		/sizeof(asn_DEF_NR_eutra_RLF_Report_r16_tags_46[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eutra_RLF_Report_r16_46,
	2,	/* Elements count */
	&asn_SPC_NR_eutra_RLF_Report_r16_specs_46	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RLF_Report_r16_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16, choice.nr_RLF_Report_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_nr_RLF_Report_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-RLF-Report-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_RLF_Report_r16, choice.eutra_RLF_Report_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_eutra_RLF_Report_r16_46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-RLF-Report-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RLF_Report_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-RLF-Report-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-RLF-Report-r16 */
};
asn_CHOICE_specifics_t asn_SPC_NR_RLF_Report_r16_specs_1 = {
	sizeof(struct NR_RLF_Report_r16),
	offsetof(struct NR_RLF_Report_r16, _asn_ctx),
	offsetof(struct NR_RLF_Report_r16, present),
	sizeof(((struct NR_RLF_Report_r16 *)0)->present),
	asn_MAP_NR_RLF_Report_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_RLF_Report_r16 = {
	"RLF-Report-r16",
	"RLF-Report-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_RLF_Report_r16_constr_1, CHOICE_constraint },
	asn_MBR_NR_RLF_Report_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_RLF_Report_r16_specs_1	/* Additional specs */
};

