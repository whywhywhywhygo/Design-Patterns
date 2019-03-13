#ifndef ROOM_H
#define ROOM_H

#include "MapSite.h"
#include <memory>
#include <array>

class Room : public MapSite
{
public:
	enum Direction {
		North, South, East, West
	};

	Room(int n);
	~Room() override = default;

	void setSide(Direction direction, std::shared_ptr<MapSite> side);
	int no() const;

private:
	std::array<std::shared_ptr<MapSite>, 4> m_sides;
	int m_no;
};

#endif