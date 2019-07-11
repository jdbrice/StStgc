/*!
 * \class StEventBranch 
 * \author Victor Perev, May 2001
 */
/***************************************************************************
 *
 * $Id: StEventBranch.h,v 1.1 2018/11/14 16:48:59 akio Exp $
 *
 * Author: Victor Perev, May 2001
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************/
#ifndef StEventBranch_hh
#define StEventBranch_hh
#include "StObject.h"

class StEvent;

class StEventBranch : public StXRef {
public:
         StEventBranch(const char *brName="", StEvent *evt=0, UInt_t tally=0);
virtual ~StEventBranch(){};
virtual	 StXRefMain *MakeMain();
         void        AddKlass(const char* className);
virtual  void        Synchro(int toMain);

ClassDef(StEventBranch,1)
};
#endif







