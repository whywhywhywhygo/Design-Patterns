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
	~EnchantedRoom() override = default;
};


#endif //CPP_ENCHANTEDROOM_H
