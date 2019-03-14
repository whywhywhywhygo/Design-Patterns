//
// Created by gaojian on 19-2-27.
//

#include "roomwithabomb.h"

using std::make_shared;

RoomWithABomb::RoomWithABomb(int n)
	: Room{n}
{}

RoomWithABomb::RoomWithABomb(std::shared_ptr<Room> room)
	: Room{room}
{}

std::shared_ptr<MapSite> RoomWithABomb::clone()
{
	return make_shared<RoomWithABomb>(std::dynamic_pointer_cast<RoomWithABomb>(shared_from_this()));
}