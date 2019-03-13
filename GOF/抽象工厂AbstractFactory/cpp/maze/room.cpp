//
// Created by gaojian on 19-2-27.
//

#include "room.h"

Room::Room(int n)
	: m_roomNumber{n}
{}

void Room::setSide(Room::Direction direction, std::shared_ptr<MapSite> site)
{
	m_sides[direction] = std::move(site);
}