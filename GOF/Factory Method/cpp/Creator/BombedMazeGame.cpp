//
// Created by gaojian on 19-3-7.
//

#include "BombedMazeGame.h"
#include "../maze/bombedwall.h"
#include "../maze/roomwithabomb.h"

using std::make_shared;

std::shared_ptr<Wall> BombedMazeGame::makeWall() const
{
	return make_shared<BombedWall>();
}

std::shared_ptr<Room> BombedMazeGame::makeRoom(int n) const
{
	return make_shared<RoomWithABomb>(n);
}
