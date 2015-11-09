#ifndef ENUMS_TRACK_HH
#define ENUMS_TRACK_HH

namespace trk{
  enum trkParDef {D0=0, Z0, PHI, THETA, QOVERP};
  enum trkCovDef {D0D0=0, Z0D0, Z0Z0, PHID0, PHIZ0, PHIPHI, THETAD0, THETAZ0, THETAPHI, THETATHETA,
                  QOVERPD0, QOVERPZ0, QOVERPPHI, QOVERPTHETA, QOVERPQOVERP};
}


#endif