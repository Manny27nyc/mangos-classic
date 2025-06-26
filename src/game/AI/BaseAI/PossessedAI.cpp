/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
#include "AI/BaseAI/PossessedAI.h"
#include "Entities/Creature.h"

PossessedAI::PossessedAI(Creature* creature) : UnitAI(static_cast<Unit*>(creature))
{
}

CreatureSpellList const& PossessedAI::GetSpellList() const
{
    static CreatureSpellList list; // will never be actually used
    return list;
}
