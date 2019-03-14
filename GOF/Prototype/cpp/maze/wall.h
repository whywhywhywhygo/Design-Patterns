//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_WALL_H
#define CPP_WALL_H

#include "mapsite.h"

class Wall : public MapSite {
public:
	Wall() = default;
	explicit Wall(std::shared_ptr<Wall> wall);
	~Wall() override = default;

	std::shared_ptr<MapSite> clone() override;
};


#endif //CPP_WALL_H
