/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rcdu/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/rcdu/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CodebookConfig_H_
#define	_NR_CodebookConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CodebookConfig__codebookType_PR {
	NR_CodebookConfig__codebookType_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType_PR_type1,
	NR_CodebookConfig__codebookType_PR_type2
} NR_CodebookConfig__codebookType_PR;
typedef enum NR_CodebookConfig__codebookType__type1__subType_PR {
	NR_CodebookConfig__codebookType__type1__subType_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type1__subType_PR_typeI_SinglePanel,
	NR_CodebookConfig__codebookType__type1__subType_PR_typeI_MultiPanel
} NR_CodebookConfig__codebookType__type1__subType_PR;
typedef enum NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR {
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR_two,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR_moreThanTwo
} NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR;
typedef enum NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR {
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_two_one_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_two_two_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_four_one_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_three_two_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_six_one_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_four_two_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_eight_one_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_four_three_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_six_two_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_twelve_one_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_four_four_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_eight_two_TypeI_SinglePanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR_sixteen_one_TypeI_SinglePanel_Restriction
} NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR;
typedef enum NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR {
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_two_two_one_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_two_four_one_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_four_two_one_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_two_two_two_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_two_eight_one_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_four_four_one_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_two_four_two_TypeI_MultiPanel_Restriction,
	NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR_four_two_two_TypeI_MultiPanel_Restriction
} NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR;
typedef enum NR_CodebookConfig__codebookType__type2__subType_PR {
	NR_CodebookConfig__codebookType__type2__subType_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type2__subType_PR_typeII,
	NR_CodebookConfig__codebookType__type2__subType_PR_typeII_PortSelection
} NR_CodebookConfig__codebookType__type2__subType_PR;
typedef enum NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR {
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_NOTHING,	/* No components present */
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_two_one,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_two_two,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_four_one,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_three_two,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_six_one,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_four_two,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_eight_one,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_four_three,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_six_two,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_twelve_one,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_four_four,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_eight_two,
	NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR_sixteen_one
} NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR;
typedef enum NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize {
	NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize_n1	= 0,
	NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize_n2	= 1,
	NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize_n3	= 2,
	NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize_n4	= 3
} e_NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection__portSelectionSamplingSize;
typedef enum NR_CodebookConfig__codebookType__type2__phaseAlphabetSize {
	NR_CodebookConfig__codebookType__type2__phaseAlphabetSize_n4	= 0,
	NR_CodebookConfig__codebookType__type2__phaseAlphabetSize_n8	= 1
} e_NR_CodebookConfig__codebookType__type2__phaseAlphabetSize;
typedef enum NR_CodebookConfig__codebookType__type2__numberOfBeams {
	NR_CodebookConfig__codebookType__type2__numberOfBeams_two	= 0,
	NR_CodebookConfig__codebookType__type2__numberOfBeams_three	= 1,
	NR_CodebookConfig__codebookType__type2__numberOfBeams_four	= 2
} e_NR_CodebookConfig__codebookType__type2__numberOfBeams;

/* NR_CodebookConfig */
typedef struct NR_CodebookConfig {
	struct NR_CodebookConfig__codebookType {
		NR_CodebookConfig__codebookType_PR present;
		union NR_CodebookConfig__NR_codebookType_u {
			struct NR_CodebookConfig__codebookType__type1 {
				struct NR_CodebookConfig__codebookType__type1__subType {
					NR_CodebookConfig__codebookType__type1__subType_PR present;
					union NR_CodebookConfig__NR_codebookType__NR_type1__NR_subType_u {
						struct NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel {
							struct NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts {
								NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts_PR present;
								union NR_CodebookConfig__NR_codebookType__NR_type1__NR_subType__NR_typeI_SinglePanel__NR_nrOfAntennaPorts_u {
									struct NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__two {
										BIT_STRING_t	 twoTX_CodebookSubsetRestriction;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *two;
									struct NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo {
										struct NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2 {
											NR_CodebookConfig__codebookType__type1__subType__typeI_SinglePanel__nrOfAntennaPorts__moreThanTwo__n1_n2_PR present;
											union NR_CodebookConfig__NR_codebookType__NR_type1__NR_subType__NR_typeI_SinglePanel__NR_nrOfAntennaPorts__NR_moreThanTwo__NR_n1_n2_u {
												BIT_STRING_t	 two_one_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 two_two_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 four_one_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 three_two_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 six_one_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 four_two_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 eight_one_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 four_three_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 six_two_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 twelve_one_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 four_four_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 eight_two_TypeI_SinglePanel_Restriction;
												BIT_STRING_t	 sixteen_one_TypeI_SinglePanel_Restriction;
											} choice;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} n1_n2;
										BIT_STRING_t	*typeI_SinglePanel_codebookSubsetRestriction_i2;	/* OPTIONAL */
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *moreThanTwo;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} nrOfAntennaPorts;
							BIT_STRING_t	 typeI_SinglePanel_ri_Restriction;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *typeI_SinglePanel;
						struct NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel {
							struct NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2 {
								NR_CodebookConfig__codebookType__type1__subType__typeI_MultiPanel__ng_n1_n2_PR present;
								union NR_CodebookConfig__NR_codebookType__NR_type1__NR_subType__NR_typeI_MultiPanel__NR_ng_n1_n2_u {
									BIT_STRING_t	 two_two_one_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 two_four_one_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 four_two_one_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 two_two_two_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 two_eight_one_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 four_four_one_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 two_four_two_TypeI_MultiPanel_Restriction;
									BIT_STRING_t	 four_two_two_TypeI_MultiPanel_Restriction;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} ng_n1_n2;
							BIT_STRING_t	 ri_Restriction;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *typeI_MultiPanel;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} subType;
				long	 codebookMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *type1;
			struct NR_CodebookConfig__codebookType__type2 {
				struct NR_CodebookConfig__codebookType__type2__subType {
					NR_CodebookConfig__codebookType__type2__subType_PR present;
					union NR_CodebookConfig__NR_codebookType__NR_type2__NR_subType_u {
						struct NR_CodebookConfig__codebookType__type2__subType__typeII {
							struct NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction {
								NR_CodebookConfig__codebookType__type2__subType__typeII__n1_n2_codebookSubsetRestriction_PR present;
								union NR_CodebookConfig__NR_codebookType__NR_type2__NR_subType__NR_typeII__NR_n1_n2_codebookSubsetRestriction_u {
									BIT_STRING_t	 two_one;
									BIT_STRING_t	 two_two;
									BIT_STRING_t	 four_one;
									BIT_STRING_t	 three_two;
									BIT_STRING_t	 six_one;
									BIT_STRING_t	 four_two;
									BIT_STRING_t	 eight_one;
									BIT_STRING_t	 four_three;
									BIT_STRING_t	 six_two;
									BIT_STRING_t	 twelve_one;
									BIT_STRING_t	 four_four;
									BIT_STRING_t	 eight_two;
									BIT_STRING_t	 sixteen_one;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} n1_n2_codebookSubsetRestriction;
							BIT_STRING_t	 typeII_RI_Restriction;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *typeII;
						struct NR_CodebookConfig__codebookType__type2__subType__typeII_PortSelection {
							long	*portSelectionSamplingSize;	/* OPTIONAL */
							BIT_STRING_t	 typeII_PortSelectionRI_Restriction;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *typeII_PortSelection;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} subType;
				long	 phaseAlphabetSize;
				BOOLEAN_t	 subbandAmplitude;
				long	 numberOfBeams;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *type2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} codebookType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CodebookConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_portSelectionSamplingSize_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_phaseAlphabetSize_63;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_numberOfBeams_67;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CodebookConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CodebookConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CodebookConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CodebookConfig_H_ */
#include <asn_internal.h>
