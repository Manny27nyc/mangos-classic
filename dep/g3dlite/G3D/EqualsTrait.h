/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
/**
  @file EqualsTrait.h

  @maintainer Morgan McGuire, http://graphics.cs.williams.edu
  @created 2008-10-01
  @edited  2008-10-01
  Copyright 2000-2009, Morgan McGuire.
  All rights reserved.
 */

#ifndef G3D_EQUALSTRAIT_H
#define G3D_EQUALSTRAIT_H

#include "G3D/platform.h"

/** Default implementation of EqualsTrait.
    @see G3D::Table for specialization requirements.
*/
template<typename Key> struct EqualsTrait {
    static bool equals(const Key& a, const Key& b) {
        return a == b;
    }
};

#endif

