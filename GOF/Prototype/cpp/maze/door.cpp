//
// Created by gaojian on 19-2-27.
//

#include "door.h"

using std::make_shared;

Door::Door(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2)
	: m_r1{r1}, m_r2{r2}
{}

Door::Door(std::shared_ptr<Door> door)
{
	m_r1 = door->m_r1;
	m_r2 = door->m_r2;
}

std::shared_ptr<MapSite> Door::clone()
{
	return make_shared<Door>(std::dynamic_pointer_cast<Door>(shared_from_this()));
}

void Door::initialize(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2)
{
	m_r1 = r1;
	m_r2 = r2;
}