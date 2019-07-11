/***************************************************************************
 *
 * $Id: StSstWaferHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $
 *
 * Author: Jonathan Bouchet, Thomas Ullrich, May 2015
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StSstWaferHitCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:49:07  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2015/05/13 16:50:59  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StSstWaferHitCollection.h"
#include "StSstHit.h"

static const char rcsid[] = "$Id: StSstWaferHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $";

ClassImp(StSstWaferHitCollection)

StSstWaferHitCollection::StSstWaferHitCollection() { /* no op */ }

StSstWaferHitCollection::~StSstWaferHitCollection()
{
    //
    // Usually this wouldn't be necessary but mHits
    // is a polymorphic container and StSstHit
    // provides its own new/delete operator.
    //
    for (unsigned int i=0; i<mHits.size(); i++) {
        delete mHits[i];
        mHits[i] = 0;
    }
}

const StSPtrVecSstHit&
StSstWaferHitCollection::hits() const { return mHits; }

StSPtrVecSstHit&
StSstWaferHitCollection::hits() { return mHits; }
