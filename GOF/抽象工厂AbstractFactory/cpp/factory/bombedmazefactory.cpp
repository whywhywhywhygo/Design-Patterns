//
// Created by gaojian on 19-2-27.
//

#include "bombedmazefactory.h"
#include "../maze/bombedwall.h"
#include "../maze/roomwithabomb.h"

using std::make_shared;

std::shared_ptr<Wall> BombedMazeFactory::makeWall() const
{
	return make_shared<BombedWall>();
}

std::shared_ptr<Room> BombedMazeFactory::makeRoom(int n) const
{
	return make_shared<RoomWithABomb>(n);
}