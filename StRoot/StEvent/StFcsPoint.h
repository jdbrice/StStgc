/**************************************************************************
 *
 * $Id: StFcsPoint.h,v 1.1 2018/11/14 16:49:00 akio Exp $
 *
 * Author: Akio Ogawa 2018
 **************************************************************************
 *
 * Description: Declaration of StFcsPoint, the StEvent FCS photon structure
 * Represents a "point" (photon etc) fitted to a cluster of FCS towers.
 *
 **************************************************************************
 *
 * $Log: StFcsPoint.h,v $
 * Revision 1.1  2018/11/14 16:49:00  akio
 * FCS codes in offline/upgrade/akio
 *
 *
 **************************************************************************/
#ifndef StFcsPoint_h
#define StFcsPoint_h

#include "StLorentzVectorF.hh"
#include "StThreeVectorF.hh"
#include "StObject.h"
#include "StFcsCluster.h"
#include "StEnumerations.h"

class StFcsPoint : public StObject {
public:
    StFcsPoint();
    ~StFcsPoint();

    int id() const;   // ID of the point in the current event.
    unsigned short detectorId() const;
    float energy() const;
    float x() const;  // x position in cm at which point intersects the sub-detector in local coordinate
    float y() const;  // y position in cm at which point intersects the sub-detector in local coordinate
    StFcsCluster* cluster(); //  Parent cluster of the photon.
    const StFcsCluster* cluster() const; //  Parent cluster of the photon.
    int parentClusterId() const; // ID of the parent cluster containing this point.
    int nParentClusterPhotons() const; // Number of points in the parent cluster.
    const StThreeVectorF& XYZ() const; // XYZ position in global STAR coordinate
    const StLorentzVectorF& fourMomentum() const;

    void setId(int phid);
    void setDetectorId(unsigned short detector);
    void setEnergy(float energy);
    void setX(float xpos);
    void setY(float ypos);
    void setCluster(StFcsCluster* cluster);
    void setParentClusterId(int cluid);
    void setNParentClusterPhotons(int nclph);
    void setXYZ(const StThreeVectorF& p3);
    void setFourMomentum(const StLorentzVectorF& p4);
    
    void print(int option=0);

private:
    Int_t    mId=-1;         ///  Photon ID within event
    UShort_t mDetectorId=0;  ///  North=0, South=1
    Float_t  mEnergy=0;      ///  Fitted energy
    Float_t  mX=0.0;         ///  Fitted x-position in local coordinate
    Float_t  mY=0.0;         ///  Fitted y-position in local coordinate
    Int_t    mParentClusterId=0.0;        ///< ID of the parent cluster within event
    Int_t    mNParentClusterPhotons=0.0;  ///< Number of photons in the parent cluster
#ifdef __CINT__
    StObjLink             mCluster;   // Parent cluster of this photon
#else
    StLink<StFcsCluster>  mCluster;
#endif //__CINT__
    StLorentzVectorF mFourMomentum;  ///< Photon 4-momentum
    StThreeVectorF   mXYZ;           //Photon position in STAR coordinate

    ClassDef(StFcsPoint, 1)
};

inline int StFcsPoint::id() const { return mId; } // ID of the point in the current event.
inline unsigned short StFcsPoint::detectorId() const { return mDetectorId; }
inline float StFcsPoint::energy() const { return mEnergy; }
inline float StFcsPoint::x() const { return mX; } // x position in cm at which point intersects the sub-detector.
inline float StFcsPoint::y() const { return mY; } // y position in cm at which point intersects the sub-detector.
inline StFcsCluster* StFcsPoint::cluster() { return mCluster; } //  Parent cluster of the photon.
inline const StFcsCluster* StFcsPoint::cluster() const { return mCluster; }
inline int StFcsPoint::parentClusterId() const { return mParentClusterId; } // ID of the parent cluster
                                                                            // containing this point.
inline int StFcsPoint::nParentClusterPhotons() const { return mNParentClusterPhotons; } // Number of points
                                                                                        // in the parent cluster.
inline const StThreeVectorF& StFcsPoint::XYZ() const { return mXYZ; }
inline const StLorentzVectorF& StFcsPoint::fourMomentum() const { return mFourMomentum; }
inline void StFcsPoint::setDetectorId(unsigned short detector) { mDetectorId = detector; }
inline void StFcsPoint::setEnergy(float energy) { mEnergy = energy; }
inline void StFcsPoint::setX(float xpos) { mX = xpos; }
inline void StFcsPoint::setY(float ypos) { mY = ypos; }
inline void StFcsPoint::setId(int phid) { mId = phid; }
inline void StFcsPoint::setCluster(StFcsCluster* cluster) { mCluster = cluster; }
inline void StFcsPoint::setParentClusterId(int cluid) { mParentClusterId = cluid; }
inline void StFcsPoint::setNParentClusterPhotons(int nclph) { mNParentClusterPhotons = nclph; }
inline void StFcsPoint::setXYZ(const StThreeVectorF& p3) { mXYZ = p3; }
inline void StFcsPoint::setFourMomentum(const StLorentzVectorF& p4) { mFourMomentum = p4; }

#endif  // StFcsPoint_h

