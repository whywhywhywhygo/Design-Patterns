#ifndef WALL_H
#define WALL_H

#include "MapSite.h"

class Wall : public MapSite
{
public:
	Wall() = default;
	~Wall() override = default;
};

#endif