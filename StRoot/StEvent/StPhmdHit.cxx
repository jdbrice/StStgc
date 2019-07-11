/********************************************************************
 *
 * $Id: StPhmdHit.cxx,v 1.1 2018/11/14 16:49:04 akio Exp $
 *
 * Author: Subhasis Chattopadhyay, Dec 2002
 ********************************************************************
 *
 * Description: This is the class for Phmd hit objects
 *
 ********************************************************************
 *
 * $Log: StPhmdHit.cxx,v $
 * Revision 1.1  2018/11/14 16:49:04  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2002/12/20 22:33:00  ullrich
 * Initial Revision.
 *
 ********************************************************************/
#include "StPhmdHit.h"

ClassImp(StPhmdHit)

StPhmdHit::StPhmdHit()
{
    mSuperModuleNumber = 0;
    mSubDetector = 0; 
    mRow = 0;
    mCol = 0;
    mEnergy = 0;
    mAdc = 0;
}

StPhmdHit::~StPhmdHit(){ /* noop */ }
