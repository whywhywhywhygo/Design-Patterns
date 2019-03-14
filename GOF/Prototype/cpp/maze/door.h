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
    Door() = default;
	Door(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);
	explicit Door(std::shared_ptr<Door> door);
	~Door() override = default;

	std::shared_ptr<MapSite> clone() override;
	void initialize(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);

private:
	std::weak_ptr<Room> m_r1;
	std::weak_ptr<Room> m_r2;
};


#endif //CPP_DOOR_H
