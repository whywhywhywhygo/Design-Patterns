//
// Created by gaojian on 19-2-27.
//

#include "wall.h"

using std::make_shared;

Wall::Wall(std::shared_ptr<Wall> wall)
{}

std::shared_ptr<MapSite> Wall::clone()
{
    return make_shared<Wall>(std::dynamic_pointer_cast<Wall>(shared_from_this()));
}
