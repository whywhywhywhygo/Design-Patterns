//
// Created by gaojian on 19-2-27.
//

#include "bombedwall.h"

using std::make_shared;

BombedWall::BombedWall(std::shared_ptr<BombedWall> wall)
{}

std::shared_ptr<MapSite> BombedWall::clone()
{
    return make_shared<BombedWall>(std::dynamic_pointer_cast<BombedWall>(shared_from_this()));
}
