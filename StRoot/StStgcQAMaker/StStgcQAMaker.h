#ifndef STSTGCQAMAKER_H
#define STSTGCQAMAKER_H

#include "StMaker.h"


class StStgcQAMaker : public StMaker {

public:
	StStgcQAMaker(const Char_t *name="stgcDb") : StMaker(name) {}
	~StStgcQAMaker(){}

	virtual Int_t  Init() {
		return kStOK;
	}
	virtual Int_t  InitRun(Int_t runNumber) {
		LOG_DEBUG << "StStgcQAMaker::InitRun - run = " << runNumber << endm;
		return kStOK;
	}
	virtual Int_t  Make();
	virtual Int_t  Finish() {LOG_DEBUG<<"StStgcQAMaker Finish"<<endm; return kStOK; }
	virtual void   Clear(const Char_t *opt) {LOG_DEBUG<<"StStgcQAMaker Clear"<<endm; StMaker::Clear();}

private:

};


#endif