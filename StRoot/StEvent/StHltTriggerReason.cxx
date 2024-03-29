/***************************************************************************
 *
 * $Id: StHltTriggerReason.cxx,v 1.1 2018/11/14 16:49:02 akio Exp $
 *
 * Author: Liang Xue, Aihong Tang, Jan 2011
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StHltTriggerReason.cxx,v $
 * Revision 1.1  2018/11/14 16:49:02  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2011/02/01 19:45:48  ullrich
 * Initial Revision
 *
 **************************************************************************/
#include "StHltTriggerReason.h"
#include "StHltTriggerReasonCapable.h"

ClassImp(StHltTriggerReason)

StHltTriggerReason::StHltTriggerReason()
{
	mReason = 0;
}

StHltTriggerReason::~StHltTriggerReason(){ /* noop */}

void StHltTriggerReason::setReasonBit(StHltTriggerReasonType val) { mReasonBit = val; }

void StHltTriggerReason::setReason(StHltTriggerReasonCapable* val) { mReason = val; }

ostream&
operator<<(ostream &os, const StHltTriggerReason& r)
{
	os << " reasonBit " << r.reasonBit() << endl;
	return os;
}
