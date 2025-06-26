/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
/**
  @file PhysicsFrameSpline.h

  @author Morgan McGuire, http://graphics.cs.williams.edu
 */
#ifndef G3D_PhysicsFrameSpline_h
#define G3D_PhysicsFrameSpline_h

#include "G3D/platform.h"
#include "G3D/PhysicsFrame.h"
#include "G3D/Spline.h"

namespace G3D {

/**
 A subclass of Spline that keeps the rotation field of a
 PhysicsFrame normalized and rotating the short direction.

 \sa UprightFrameSpline
 */
class PhysicsFrameSpline : public Spline<PhysicsFrame> {
public:
    PhysicsFrameSpline();

    /** Accepts a table of properties, or any valid PhysicsFrame specification for a single control*/
    PhysicsFrameSpline(const Any& any);

    /** Clear and then reset all values from the any */
    PhysicsFrameSpline& operator=(const Any& any);

    virtual void correct(PhysicsFrame& frame) const;
    virtual void ensureShortestPath(PhysicsFrame* A, int N) const;
};

}

#endif
