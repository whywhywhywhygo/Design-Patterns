#include "Room.h"

Room::Room(int n)
	: m_no{ n }
{}

void Room::setSide(Room::Direction direction, std::shared_ptr<MapSite> side)
{
	m_sides[direction] = side;
}

int Room::no() const
{
	return m_no;
}
