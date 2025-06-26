/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
#ifdef USE_ANTICHEAT
#error "This file should not be included when the real anticheat module is present"
#endif

#include "Anticheat.hpp"

AnticheatLibInterface* GetAnticheatLib()
{
    static NullAnticheatLib l;
    return &l;
}