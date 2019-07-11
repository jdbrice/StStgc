/*****************************************************************************
 *
 * $Id: StFcsCluster.cxx,v 1.2 2019/06/21 17:43:21 akio Exp $
 *
 * Author: Akio Ogawa 2018
 * ***************************************************************************
 *
 * Description: Implementation of StFcsCluster, a group of adjacent FCS towers
 *
 * ***************************************************************************
 *
 * $Log: StFcsCluster.cxx,v $
 * Revision 1.2  2019/06/21 17:43:21  akio
 * added neighbor
 *
 * Revision 1.1  2018/11/14 16:48:59  akio
 * FCS codes in offline/upgrade/akio
 *
 *
 *****************************************************************************/
#include "StFcsCluster.h"

#include "StMessMgr.h"

static const char rcsid[] = "$Id: StFcsCluster.cxx,v 1.2 2019/06/21 17:43:21 akio Exp $";

StFcsCluster::StFcsCluster(): StObject(), mFourMomentum(0.,0.,0.,0.) { /* no op */ }

StFcsCluster::~StFcsCluster() { /* no op */ }

void StFcsCluster::addNeighbor(StFcsCluster* neighbor){
  int n=nNeighbor();
  for(int i=0; i<n; i++) if(mNeighbor[i]==neighbor) return; //already there, do nothing
  mNeighbor.push_back(neighbor);
}

void StFcsCluster::print(Option_t *option) const {
    cout << Form(
      "StFcsCluster id=%4d categ=%1d nTow=%2d nNeigh=%1d nPhoton=%1d loc=%7.2f %7.2f PXYZE=%7.2f %7.2f %7.2f %7.2f E=%7.2f sigMin/max=%7.2f %7.2f",
      id(), category(), nTowers(), nNeighbor(),nPhotons(),
      x(), y(), 
      fourMomentum().px(),fourMomentum().py(),fourMomentum().pz(),fourMomentum().e(),
      energy(), sigmaMin(), sigmaMax()) << endl;
}
