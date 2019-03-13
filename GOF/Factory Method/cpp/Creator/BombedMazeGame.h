//
// Created by gaojian on 19-3-7.
//

#ifndef CPP_BOMBEDMAZEGAME_H
#define CPP_BOMBEDMAZEGAME_H

#include "MazeGame.h"

class BombedMazeGame : public MazeGame {
public:
	~BombedMazeGame() override = default;

	std::shared_ptr<Wall> makeWall() const override;
	std::shared_ptr<Room> makeRoom(int n) const override;
};


#endif //CPP_BOMBEDMAZEGAME_H
