//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_ROOM_H
#define CPP_ROOM_H

#include <memory>
#include <array>
#include "mapsite.h"

class Room : public MapSite {
public:
	enum Direction {North, South, East, West};

	Room() = default;
	explicit Room(int n);
	explicit Room(std::shared_ptr<Room> room);
	~Room() override = default;

	std::shared_ptr<MapSite> clone() override;
	void initialize(int n);

	void setSide(Direction direction, std::shared_ptr<MapSite> site);

private:
	int m_roomNumber;
	std::array<std::shared_ptr<MapSite>, 4> m_sides;
};


#endif //CPP_ROOM_H
