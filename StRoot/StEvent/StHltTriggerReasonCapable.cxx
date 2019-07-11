/***************************************************************************
 *
 * $Id: StHltTriggerReasonCapable.cxx,v 1.1 2018/11/14 16:49:02 akio Exp $
 *
 * Author: Liang Xue, Aihong Tang, Jan 2011
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: StHltTriggerReasonCapable.cxx,v $
 * Revision 1.1  2018/11/14 16:49:02  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2011/02/01 19:45:48  ullrich
 * Initial Revision
 *
 **************************************************************************/
#include "StHltTriggerReasonCapable.h"

ClassImp(StHltTriggerReasonCapable)

StHltTriggerReasonCapable::StHltTriggerReasonCapable() { }

StHltTriggerReasonCapable::~StHltTriggerReasonCapable() {/* noop */}

ostream&
operator<<(ostream &os, const StHltTriggerReasonCapable& r)
{
	return os;
}
