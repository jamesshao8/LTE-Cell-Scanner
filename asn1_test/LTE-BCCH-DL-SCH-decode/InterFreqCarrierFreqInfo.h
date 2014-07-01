/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_InterFreqCarrierFreqInfo_H_
#define	_InterFreqCarrierFreqInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "Q-RxLevMin.h"
#include "P-Max.h"
#include "T-Reselection.h"
#include "ReselectionThreshold.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "CellReselectionPriority.h"
#include "NeighCellConfig.h"
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct InterFreqNeighCellList;
struct InterFreqBlackCellList;

/* InterFreqCarrierFreqInfo */
typedef struct InterFreqCarrierFreqInfo {
	ARFCN_ValueEUTRA_t	 dl_CarrierFreq;
	Q_RxLevMin_t	 q_RxLevMin;
	P_Max_t	*p_Max	/* OPTIONAL */;
	T_Reselection_t	 t_ReselectionEUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionEUTRA_SF	/* OPTIONAL */;
	ReselectionThreshold_t	 threshX_High;
	ReselectionThreshold_t	 threshX_Low;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	PresenceAntennaPort1_t	 presenceAntennaPort1;
	CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
	NeighCellConfig_t	 neighCellConfig;
	Q_OffsetRange_t	*q_OffsetFreq	/* DEFAULT 15 */;
	struct InterFreqNeighCellList	*interFreqNeighCellList	/* OPTIONAL */;
	struct InterFreqBlackCellList	*interFreqBlackCellList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"
#include "InterFreqNeighCellList.h"
#include "InterFreqBlackCellList.h"

#endif	/* _InterFreqCarrierFreqInfo_H_ */
#include <asn_internal.h>