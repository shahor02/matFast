#include "MathLayer.h"

using namespace MatQuery;

ClassImp(MatLayer);

// temporary constants
const float kTinyDist = 1e-4;

//______________________________________________________________
Bool_t MatLayer::QueryMaterial(const float xyz0[3],const float xyz1[3], float* res) const
{
  // query material along the straight line between 2 points in the lab frame
  // 
  // 1) parametric track equation \vec{r} = \vec{r_0} + \vec{b}*t , with t being distance
  float bx(xyz1[0]-xyz0[0]),by(xyz1[1]-xyz0[1]),bz(xyz1[2]-xyz0[2]);
  float path2 = bx*bx + by*by + bz*bz;
  if (path2<kTinyDist*kTinyDist) return kTRUE;
  float pathI = 1.f/sqrtf(path2);
  bx *= pathI;
  by *= pathI;
  bz *= pathI;
  
}
