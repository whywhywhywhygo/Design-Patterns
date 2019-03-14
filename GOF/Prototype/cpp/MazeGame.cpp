//
// Created by 17271 on 2019/3/14.
//

#include "MazeGame.h"
#include "MazeFactory.h"
#include "maze/maze.h"
#include "maze/room.h"
#include "maze/wall.h"

using std::shared_ptr;

std::shared_ptr<Maze> MazeGame::createMaze(std::weak_ptr<MazeFactory> factory)
{
    shared_ptr<Maze> maze = factory.lock()->makeMaze();
    shared_ptr<Room> r1 = factory.lock()->makeRoom(1);
    shared_ptr<Room> r2 = factory.lock()->makeRoom(2);
    shared_ptr<Door> door = factory.lock()->makeDoor(r1, r2);

    maze->addRoom(r1);
    maze->addRoom(r2);

    r1->setSide(Room::Direction::North, factory.lock()->makeWall());
    r1->setSide(Room::Direction::South, factory.lock()->makeWall());
    r1->setSide(Room::Direction::East, factory.lock()->makeWall());
    r1->setSide(Room::Direction::West, factory.lock()->makeWall());

    r2->setSide(Room::Direction::North, factory.lock()->makeWall());
    r2->setSide(Room::Direction::South, factory.lock()->makeWall());
    r2->setSide(Room::Direction::East, factory.lock()->makeWall());
    r2->setSide(Room::Direction::West, factory.lock()->makeWall());

    return maze;
}
