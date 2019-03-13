//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_DOOR_H
#define CPP_DOOR_H

#include "mapsite.h"
#include <memory>

class Room;

class Door : public MapSite{
public:
	Door(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);
	~Door() override = default;

private:
	std::weak_ptr<Room> m_r1;
	std::weak_ptr<Room> m_r2;
};


#endif //CPP_DOOR_H
