/*!
 * \class StEpdCollection
 * \author Mike Lisa, Jan 2018
 */
/***************************************************************************
 *
 * $Id: StEpdCollection.cxx,v 1.1 2018/11/14 16:48:58 akio Exp $
 *
 * Author: Mike Lisa, Jan 2018
 ***************************************************************************
 *
 * Description: see header file
 *
 ***************************************************************************
 *
 * $Log: StEpdCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:48:58  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2018/02/08 17:35:02  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StEpdCollection.h"

//static const char rcsid[] = "$Id: StEpdCollection.cxx,v 1.1 2018/11/14 16:48:58 akio Exp $";

ClassImp(StEpdCollection)
    
StEpdCollection::StEpdCollection()
{
  /* no-op */
}

StEpdCollection::~StEpdCollection()
{
  /* no-op */
}

const StSPtrVecEpdHit&
StEpdCollection::epdHits() const { return mEpdHits; }

StSPtrVecEpdHit&
StEpdCollection::epdHits() { return mEpdHits; }


void
StEpdCollection::addHit(const StEpdHit* aHit)
{
    if (aHit) mEpdHits.push_back(aHit);
}

bool
StEpdCollection::hitsPresent() const { return mEpdHits.size(); }

