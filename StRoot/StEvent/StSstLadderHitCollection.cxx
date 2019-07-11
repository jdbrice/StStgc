/***************************************************************************
 *
 * $Id: StSstLadderHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $
 *
 * Author: Jonathan Bouchet, Thomas Ullrich, May 2015
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StSstLadderHitCollection.cxx,v $
 * Revision 1.1  2018/11/14 16:49:07  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2015/05/13 16:50:59  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StSstLadderHitCollection.h"

static const char rcsid[] = "$Id: StSstLadderHitCollection.cxx,v 1.1 2018/11/14 16:49:07 akio Exp $";

ClassImp(StSstLadderHitCollection)

StSstLadderHitCollection::StSstLadderHitCollection() { /* no op */ }

StSstLadderHitCollection::~StSstLadderHitCollection() { /* no op */ }

unsigned int
StSstLadderHitCollection::numberOfWafers() const {return mMaxNumberOfWafers;}

unsigned int
StSstLadderHitCollection::numberOfHits() const
{
    unsigned int sum = 0;
    for (unsigned int j=0; j<numberOfWafers(); j++) {
        sum += mWafers[j].hits().size();
    }
    return sum;
}

StSstWaferHitCollection*
StSstLadderHitCollection::wafer(unsigned int i)
{
    if (i < numberOfWafers())
        return &(mWafers[i]);
    else
        return 0;
}

const StSstWaferHitCollection*
StSstLadderHitCollection::wafer(unsigned int i) const
{
    if (i < numberOfWafers())
        return &(mWafers[i]);
    else
        return 0;
}
    
