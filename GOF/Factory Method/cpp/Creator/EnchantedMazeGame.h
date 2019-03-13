//
// Created by gaojian on 19-3-7.
//

#ifndef CPP_ENCHANTEDMAZEGAME_H
#define CPP_ENCHANTEDMAZEGAME_H

#include "MazeGame.h"

class Spell;

class EnchantedMazeGame : public MazeGame {
public:
	~EnchantedMazeGame() override = default;

	std::shared_ptr<Room> makeRoom(int n) const override;
	std::shared_ptr<Door> makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const override;

protected:
	std::shared_ptr<Spell> castSpell() const;
};


#endif //CPP_ENCHANTEDMAZEGAME_H
