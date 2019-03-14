//
// Created by gaojian on 19-2-27.
//

#include "enchantedroom.h"

using std::make_shared;

EnchantedRoom::EnchantedRoom(int n, std::shared_ptr<Spell> spell)
	: Room{n}
{}

EnchantedRoom::EnchantedRoom(std::shared_ptr<EnchantedRoom> enchantedRoom)
	: Room{enchantedRoom}
{}

std::shared_ptr<MapSite> EnchantedRoom::clone()
{
	return make_shared<EnchantedRoom>(std::dynamic_pointer_cast<EnchantedRoom>(shared_from_this()));
}