//
// Created by 17271 on 2019/3/14.
//

#include "MazeFactory.h"
#include "maze/maze.h"
#include "maze/wall.h"
#include "maze/room.h"
#include "maze/door.h"

using std::make_shared;

std::shared_ptr<Maze> MazeFactory::makeMaze() const
{
    return make_shared<Maze>();
}

std::shared_ptr<Wall> MazeFactory::makeWall() const
{
    return make_shared<Wall>();
}

std::shared_ptr<Room> MazeFactory::makeRoom(int n) const
{
    return make_shared<Room>(n);
}

std::shared_ptr<Door> MazeFactory::makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const
{
    return make_shared<Door>(r1, r2);
}