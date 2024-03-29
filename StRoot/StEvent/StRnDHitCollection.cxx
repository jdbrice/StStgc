/***************************************************************************
 *
 * $Id: StRnDHitCollection.cxx,v 1.1 2018/11/14 16:49:06 akio Exp $
 *
 * Author: Thomas Ullrich, Jan 2006
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StRnDHitCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:49:06  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2006/01/19 21:42:06  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StRnDHitCollection.h"
#include "StRnDHit.h"

ClassImp(StRnDHitCollection)

StRnDHitCollection::StRnDHitCollection() { /* noop */ }

StRnDHitCollection::~StRnDHitCollection()
{
    //
    // Usually this wouldn't be necessary but mHits
    // is a polymorphic container and StRnDHit
    // provides its own new/delete operator.
    //
    for (unsigned int i=0; i<mHits.size(); i++) {
        delete mHits[i];
        mHits[i] = 0;
    }
}

bool
StRnDHitCollection::addHit(StRnDHit* hit)
{
    if (hit) {
        mHits.push_back(hit);
        return true;
    }
    else
        return false;
}

