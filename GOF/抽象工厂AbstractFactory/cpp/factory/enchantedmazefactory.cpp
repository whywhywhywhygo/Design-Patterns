//
// Created by gaojian on 19-2-27.
//

#include "enchantedmazefactory.h"
#include "../maze/enchantedroom.h"
#include "../maze/doorneedingspell.h"
#include "../maze/spell.h"

using std::make_shared;

std::shared_ptr<Room> EnchantedMazeFactory::makeRoom(int n) const
{
	return make_shared<EnchantedRoom>(n, CastSpell());
}

std::shared_ptr<Door> EnchantedMazeFactory::makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const
{
	return make_shared<DoorNeedingSpell>(r1, r2);
}

std::shared_ptr<Spell> EnchantedMazeFactory::CastSpell() const
{
	return make_shared<Spell>();
}