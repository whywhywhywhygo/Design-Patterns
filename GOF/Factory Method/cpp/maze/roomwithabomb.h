//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_ROOMWITHABOMB_H
#define CPP_ROOMWITHABOMB_H

#include "room.h"

class RoomWithABomb : public Room {
public:
	RoomWithABomb(int n);
	~RoomWithABomb() override = default;
};


#endif //CPP_ROOMWITHABOMB_H
