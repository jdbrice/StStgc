/*!
 * \class StPxlSectorHitCollection 
 * \author X. Dong, Jan 2013
 */
/***************************************************************************
 *
 * $Id: StPxlSectorHitCollection.h,v 1.1 2018/11/14 16:49:05 akio Exp $
 *
 * Author: X. Dong, Jan 2013
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StPxlSectorHitCollection.h,v $
 * Revision 1.1  2018/11/14 16:49:05  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2013/03/05 14:40:41  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#ifndef StPxlSectorHitCollection_hh
#define StPxlSectorHitCollection_hh

#include "StObject.h"
#include "StPxlLadderHitCollection.h"

class StPxlSectorHitCollection : public StObject {
public:
    StPxlSectorHitCollection();
    ~StPxlSectorHitCollection();

    unsigned int numberOfHits() const;
    unsigned int numberOfLadders() const;
        
    StPxlLadderHitCollection*       ladder(unsigned int);
    const StPxlLadderHitCollection* ladder(unsigned int) const;
    
private:
    enum { mNumberOfLadders = 4 };
    StPxlLadderHitCollection mLadders[mNumberOfLadders];
    
    ClassDef(StPxlSectorHitCollection,1)
};

inline unsigned int StPxlSectorHitCollection::numberOfLadders() const { return mNumberOfLadders; }

#endif
