/***************************************************************************
 *
 * $Id: StDetectorName.cxx,v 1.1 2018/11/14 16:48:57 akio Exp $
 *
 * Author: unknown
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StDetectorName.cxx,v $
 * Revision 1.1  2018/11/14 16:48:57  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.2  2015/05/13 17:06:13  ullrich
 * Added hooks and interfaces to Sst detector (part of HFT).
 *
 *
 **************************************************************************/
#include "StDetectorName.h"
#include <map>

const char* DetectorName(int id) {
    
    static bool init = true;
    static std::map<int, const char *> DetectorNames;
    
    if (init) {
        DetectorNames[kUnknownId  ] = "Unknown";
        DetectorNames[kTpcId      ] = "Tpc";
        DetectorNames[kSvtId      ] = "Svt";
        DetectorNames[kRichId     ] = "Rich";
        DetectorNames[kFtpcWestId ] = "FtpcWest";
        DetectorNames[kFtpcEastId ] = "FtpcEast";
        DetectorNames[kTofId      ] = "Tof";
        DetectorNames[kBTofId     ] = "Tof";
        DetectorNames[kCtbId      ] = "Ctb";
        DetectorNames[kSsdId      ] = "Ssd";
        DetectorNames[kSstId      ] = "Sst";
        DetectorNames[kBarrelEmcTowerId    ] = "BarrelEmcTower";
        DetectorNames[kBarrelEmcPreShowerId] = "BarrelEmcPreShower";
        DetectorNames[kBarrelSmdEtaStripId ] = "BarrelSmdEtaStrip";
        DetectorNames[kBarrelSmdPhiStripId ] = "BarrelSmdPhiStrip";
        DetectorNames[kEndcapEmcTowerId    ] = "EndcapEmcTower";
        DetectorNames[kEndcapEmcPreShowerId] = "EndcapEmcPreShower";
        DetectorNames[kEndcapSmdUStripId   ] = "EndcapSmdUStrip";
        DetectorNames[kEndcapSmdVStripId   ] = "EndcapSmdVStrip";
        DetectorNames[kZdcWestId  ] = "ZdcWest";
        DetectorNames[kZdcEastId  ] = "ZdcEast";
        DetectorNames[kMwpcWestId ] = "MwpcWest";
        DetectorNames[kMwpcEastId ] = "MwpcEast";
        DetectorNames[kTpcSsdId   ] = "TpcSsd";
        DetectorNames[kTpcSvtId   ] = "TpcSvt";
        DetectorNames[kTpcSsdSvtId] = "TpcSsdSvt";
        DetectorNames[kSsdSvtId   ] = "SsdSvt";
        DetectorNames[kPhmdCpvId  ] = "PhmdCpv";
        DetectorNames[kPhmdId     ] = "Phmd";
        DetectorNames[kPxlId      ] = "Pxl";
        DetectorNames[kIstId      ] = "Ist";
        DetectorNames[kFgtId      ] = "Fgt";
        DetectorNames[kEtrId      ] = "Etr";
        DetectorNames[kFpdWestId  ] = "FpdWest";
        DetectorNames[kFpdEastId  ] = "FpdEast";
        DetectorNames[kFmsId      ] = "Fms";
        DetectorNames[kRpsId      ] = "Rps";
        DetectorNames[kMtdId      ] = "Mtd";
    }
    
    if (id < kMaxDetectorId)
        return DetectorNames[id];
    else
        return DetectorNames[0];
}
