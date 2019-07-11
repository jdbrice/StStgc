/*!
 * \class StPhmdModule
 * \author Subhasis Chattopadhyay
 */
/********************************************************************
 *
 * $Id: StPhmdModule.h,v 1.1 2018/11/14 16:49:04 akio Exp $
 *
 * Author: Subhasis Chattopadhyay, Dec 2002
 ********************************************************************
 *
 * Description: This is the class for each supermodule 
 *              having the hit information.
 *
 ********************************************************************
 *
 * $Log: StPhmdModule.h,v $
 * Revision 1.1  2018/11/14 16:49:04  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2002/12/20 22:33:00  ullrich
 * Initial Revision.
 *
 ********************************************************************/
#ifndef StPhmdModule_hh
#define StPhmdModule_hh

#include "StObject.h"
#include "StContainers.h"
#include "StPhmdHit.h"

class StPhmdModule : public StObject {
public:
    StPhmdModule();          
    ~StPhmdModule();         
 
    unsigned int            numberOfHits() const;
    StSPtrVecPhmdHit&       hits();
    const StSPtrVecPhmdHit& hits() const;    
    
private:
    StSPtrVecPhmdHit mHits;
    ClassDef(StPhmdModule,1)
};
#endif









