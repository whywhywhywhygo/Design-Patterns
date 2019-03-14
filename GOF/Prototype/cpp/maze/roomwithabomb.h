//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_ROOMWITHABOMB_H
#define CPP_ROOMWITHABOMB_H

#include "room.h"

class RoomWithABomb : public Room {
public:
	explicit RoomWithABomb(int n);
	explicit RoomWithABomb(std::shared_ptr<Room> room);
	~RoomWithABomb() override = default;

	std::shared_ptr<MapSite> clone() override;
};


#endif //CPP_ROOMWITHABOMB_H
