//
// Created by gaojian on 19-2-27.
//

#include "maze.h"

using std::make_shared;

Maze::Maze(std::shared_ptr<Maze> maze)
{
	std::copy(maze->m_rooms.begin(), maze->m_rooms.end(), std::back_inserter(m_rooms));
}

void Maze::addRoom(std::shared_ptr<Room> room)
{
	m_rooms.push_back(room);
}

std::shared_ptr<Maze> Maze::clone()
{
	return shared_from_this();
}