//
// Created by gaojian on 19-3-7.
//

#include "EnchantedMazeGame.h"
#include "../maze/spell.h"
#include "../maze/enchantedroom.h"
#include "../maze/doorneedingspell.h"

using std::make_shared;

std::shared_ptr<Room> EnchantedMazeGame::makeRoom(int n) const
{
	return make_shared<EnchantedRoom>(n, castSpell());
}

std::shared_ptr<Door> EnchantedMazeGame::makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const
{
	return make_shared<DoorNeedingSpell>(r1, r2);
}

std::shared_ptr<Spell> EnchantedMazeGame::castSpell() const
{
	return make_shared<Spell>();
}
