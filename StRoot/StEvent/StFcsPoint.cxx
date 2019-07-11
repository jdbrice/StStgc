/***************************************************************************
 *
 * $Id: StFcsPoint.cxx,v 1.1 2018/11/14 16:49:00 akio Exp $
 *
 * Author: akio ogawa 2018
 ***************************************************************************
 *
 * Description: Implementation of StFcsPoint, the StEvent FCS
 *              photon structure
 *
 ***************************************************************************
 *
 * $Log: StFcsPoint.cxx,v $
 * Revision 1.1  2018/11/14 16:49:00  akio
 * FCS codes in offline/upgrade/akio
 *
 *
 ***************************************************************************/
#include "StFcsPoint.h"
#include "St_base/StMessMgr.h"
#include "TMath.h"

static const char rcsid[] = "$Id: StFcsPoint.cxx,v 1.1 2018/11/14 16:49:00 akio Exp $";

StFcsPoint::StFcsPoint() :  StObject(), mFourMomentum(0.,0.,0.,0.) { /* no op */ }

StFcsPoint::~StFcsPoint() { /* no op */ }

void StFcsPoint::print(int opt) {
    cout << Form("StFcsPoint: Id=%4d Det=%2d ParentId=%3d local=%6.1f %6.1f xyz=%6.1f %6.1f %6.1f E=%7.2f ET=%6.2f",
                 id(), detectorId(), parentClusterId(),
                 x(), y(), XYZ().x(), XYZ().y(), XYZ().z(), energy(), fourMomentum().perp())
	 << endl;
}
