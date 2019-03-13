//
// Created by gaojian on 19-2-27.
//

#include "maze.h"

void Maze::addRoom(std::shared_ptr<Room> room)
{
	m_rooms.push_back(room);
}