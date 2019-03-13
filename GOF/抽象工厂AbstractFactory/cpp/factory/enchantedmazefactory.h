//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_ENCHANTEDMAZEFACTORY_H
#define CPP_ENCHANTEDMAZEFACTORY_H

#include "mazefactory.h"

class Spell;

class EnchantedMazeFactory : public MazeFactory {
public:
	EnchantedMazeFactory() = default;

	std::shared_ptr<Room> makeRoom(int n) const override;
	std::shared_ptr<Door> makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const override;

protected:
	std::shared_ptr<Spell> CastSpell() const;
};


#endif //CPP_ENCHANTEDMAZEFACTORY_H
