/********************************************************************
 *
 * $Id: StPhmdModule.cxx,v 1.1 2018/11/14 16:49:04 akio Exp $
 *
 * Author: Subhasis Chattopadhyay, Dec 2002
 ********************************************************************
 *
 * Description: Class for supermodule 
 *
 ********************************************************************
 *
 * $Log: StPhmdModule.cxx,v $
 * Revision 1.1  2018/11/14 16:49:04  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2002/12/20 22:33:00  ullrich
 * Initial Revision.
 *
 ********************************************************************/
#include "StPhmdModule.h"


ClassImp(StPhmdModule)

StPhmdModule::StPhmdModule() { /* noop */ }

StPhmdModule::~StPhmdModule() { /* noop */ }

unsigned int
StPhmdModule::numberOfHits() const {return mHits.size();}

const StSPtrVecPhmdHit&
StPhmdModule::hits() const { return mHits; }

StSPtrVecPhmdHit&
StPhmdModule::hits() { return mHits; }



