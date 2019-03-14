//
// Created by gaojian on 19-2-27.
//

#include "room.h"

using std::make_shared;

Room::Room(int n)
	: m_roomNumber{n}
{}

Room::Room(std::shared_ptr<Room> room)
	: m_roomNumber{room->m_roomNumber}, m_sides{room->m_sides}
{}

std::shared_ptr<MapSite> Room::clone()
{
	return make_shared<Room>(std::dynamic_pointer_cast<Room>(shared_from_this()));
}

void Room::initialize(int n)
{
	m_roomNumber = n;
}

void Room::setSide(Room::Direction direction, std::shared_ptr<MapSite> site)
{
	m_sides[direction] = std::move(site);
}
