/*!
 * \class StPhmdCollection
 * \author  Subhasis Chattopadhyay
 */
/********************************************************************
 *
 * $Id: StPhmdCollection.h,v 1.1 2018/11/14 16:49:04 akio Exp $
 *
 * Author: Subhasis Chattopadhyay, Dec 2002
 ********************************************************************
 *
 * Description: Base class for PMD Collection which
 *              includes both PMD and CPV
 *
 ********************************************************************
 *
 * $Log: StPhmdCollection.h,v $
 * Revision 1.1  2018/11/14 16:49:04  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2002/12/20 22:33:00  ullrich
 * Initial Revision.
 *
 ********************************************************************/
#ifndef StPhmdCollection_hh
#define StPhmdCollection_hh

#include "StObject.h"
#include "StContainers.h"
#include "StEnumerations.h"
#include "StPhmdHit.h"

class StPhmdDetector;

class StPhmdCollection : public StObject {
public:
    StPhmdCollection();
    ~StPhmdCollection();
    
    StPhmdDetector*          detector(StDetectorId);
    const StPhmdDetector*    detector(StDetectorId) const;
    
    void setDetector(StPhmdDetector*);
    
private:
    StPhmdDetector*   mDetector;
    StPhmdDetector*   mCpvDetector;
    ClassDef(StPhmdCollection,1)
};

#endif








