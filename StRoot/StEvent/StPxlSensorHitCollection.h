/*!
 * \class StPxlSensorHitCollection 
 * \author X. Dong, Jan 2013
 */
/***************************************************************************
 *
 * $Id: StPxlSensorHitCollection.h,v 1.1 2018/11/14 16:49:05 akio Exp $
 *
 * Author: X. Dong, Jan 2013
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StPxlSensorHitCollection.h,v $
 * Revision 1.1  2018/11/14 16:49:05  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2013/03/05 14:40:41  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#ifndef StPxlSensorHitCollection_hh
#define StPxlSensorHitCollection_hh

#include "StObject.h"
#include "StContainers.h"

class StPxlHit;

class StPxlSensorHitCollection : public StObject {
public:
    StPxlSensorHitCollection();
    ~StPxlSensorHitCollection();

    StSPtrVecPxlHit&       hits();
    const StSPtrVecPxlHit& hits() const;
    
private:
    StSPtrVecPxlHit mHits;
    
    ClassDef(StPxlSensorHitCollection,1)
};
#endif
