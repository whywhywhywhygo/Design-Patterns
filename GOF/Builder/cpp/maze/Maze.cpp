#include "Maze.h"
#include "Room.h"
#include <algorithm>

std::weak_ptr<Room> Maze::roomNo(int n)
{
	auto room = std::find_if(m_rooms.begin(), m_rooms.end(),
			[n](auto room) { return room->no() == n; });
	return room == m_rooms.end() ? nullptr : *room;
}

void Maze::addRoom(std::shared_ptr<Room> room)
{
	m_rooms.push_back(room);
}
