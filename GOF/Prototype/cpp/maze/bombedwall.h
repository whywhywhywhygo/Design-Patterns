//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_BOMBEDWALL_H
#define CPP_BOMBEDWALL_H

#include "wall.h"

class BombedWall : public Wall {
public:
    BombedWall() = default;
	explicit BombedWall(std::shared_ptr<BombedWall> wall);
	~BombedWall() override = default;

	std::shared_ptr<MapSite> clone() override;
};


#endif //CPP_BOMBEDWALL_H
