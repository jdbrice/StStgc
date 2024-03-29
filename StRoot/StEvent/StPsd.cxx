/***************************************************************************
 *
 * $Id: StPsd.cxx,v 1.1 2018/11/14 16:49:04 akio Exp $
 *
 * Author: Thomas Ullrich, Mar 2001
 ***************************************************************************
 *
 * Description: Base class for all Physics Summary Data (PSD) classes.
 *
 ***************************************************************************
 *
 * $Log: StPsd.cxx,v $
 * Revision 1.1  2018/11/14 16:49:04  akio
 * FCS codes in offline/upgrade/akio
 *
 * Revision 2.1  2001/03/14 02:27:49  ullrich
 * Initial Revision.
 *
 **************************************************************************/
#include "StPsd.h"

ClassImp(StPsd)

static const char rcsid[] = "$Id";

StPsd::StPsd() : mPwg(generic), mId(0) { /* noop */ }

StPsd::StPsd(StPwg pwg, int id) : mPwg(pwg), mId(id) { /* noop */ }

StPsd::~StPsd() { /* noop */ }

StPwg
StPsd::pwg() const {return mPwg;}

int
StPsd::id() const {return mId;}

void
StPsd::setPwg(StPwg pwg) {mPwg = pwg;}

void
StPsd::setId(int id) {mId = id;}
