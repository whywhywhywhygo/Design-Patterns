//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_ENCHANTEDROOM_H
#define CPP_ENCHANTEDROOM_H

#include "room.h"

class Spell;

class EnchantedRoom : public Room {
public:
	EnchantedRoom(int n, std::shared_ptr<Spell> spell);
	explicit EnchantedRoom(std::shared_ptr<EnchantedRoom> enchantedRoom);
	~EnchantedRoom() override = default;

	std::shared_ptr<MapSite> clone() override;
};


#endif //CPP_ENCHANTEDROOM_H
