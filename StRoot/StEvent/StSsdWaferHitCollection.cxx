/***************************************************************************
 *
 * $Id: StSsdWaferHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $
 *
 * Author: Lilian Martin, Thomas Ullrich, Dec 1999
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StSsdWaferHitCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:49:07  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.2  2001/04/05 04:00:55  ullrich
 * Replaced all (U)Long_t by (U)Int_t and all redundant ROOT typedefs.
 *
 * Revision 2.1  2000/01/05 16:00:11  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StSsdWaferHitCollection.h"
#include "StSsdHit.h"

static const char rcsid[] = "$Id: StSsdWaferHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $";

ClassImp(StSsdWaferHitCollection)

StSsdWaferHitCollection::StSsdWaferHitCollection() { /* noop */ }

StSsdWaferHitCollection::~StSsdWaferHitCollection()
{
    //
    // Usually this wouldn't be necessary but mHits
    // is a polymorphic container and StSsdHit
    // provides its own new/delete operator.
    //
    for (unsigned int i=0; i<mHits.size(); i++) {
        delete mHits[i];
        mHits[i] = 0;
    }
}

const StSPtrVecSsdHit&
StSsdWaferHitCollection::hits() const { return mHits; }

StSPtrVecSsdHit&
StSsdWaferHitCollection::hits() { return mHits; }
