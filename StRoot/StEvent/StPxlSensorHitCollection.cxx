/***************************************************************************
 *
 * $Id: StPxlSensorHitCollection.cxx,v 1.1 2018/11/14 16:49:05 akio Exp $
 *
 * Author: X. Dong, Jan 2013
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StPxlSensorHitCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:49:05  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2013/03/05 14:40:41  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StPxlSensorHitCollection.h"
#include "StPxlHit.h"

ClassImp(StPxlSensorHitCollection)

StPxlSensorHitCollection::StPxlSensorHitCollection() { /* noop */ }

StPxlSensorHitCollection::~StPxlSensorHitCollection() 
{
    //
    // Usually this wouldn't be necessary but mHits
    // is a polymorphic container and StPxlHit
    // provides its own new/delete operator.
    //
    for (unsigned int i=0; i<mHits.size(); i++) {
        delete mHits[i];
        mHits[i] = 0;
    }
}

const StSPtrVecPxlHit&
StPxlSensorHitCollection::hits() const { return mHits; }

StSPtrVecPxlHit&
StPxlSensorHitCollection::hits() { return mHits; }
