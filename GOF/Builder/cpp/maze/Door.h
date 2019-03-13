#ifndef DOOR_H
#define DOOR_H

#include "MapSite.h"
#include <memory>

class Room;

class Door :
	public MapSite
{
public:
	Door(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);
	~Door() override = default;;

private:
	std::weak_ptr<Room> m_r1;
	std::weak_ptr<Room> m_r2;
};

#endif