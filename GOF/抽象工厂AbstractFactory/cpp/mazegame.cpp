//
// Created by gaojian on 19-2-27.
//

#include "mazegame.h"
#include "factory/mazefactory.h"
#include "maze/maze.h"
#include "maze/room.h"
#include "maze/wall.h"

using std::shared_ptr;				using std::make_shared;

std::shared_ptr<Maze> MazeGame::createMaze(std::weak_ptr<MazeFactory> factory)
{
	shared_ptr<Maze> aMaze = factory.lock()->makeMaze();
	shared_ptr<Room> r1 = factory.lock()->makeRoom(1);
	shared_ptr<Room> r2 = factory.lock()->makeRoom(2);
	shared_ptr<Door> aDoor = factory.lock()->makeDoor(r1, r2);

	aMaze->addRoom(r1);
	aMaze->addRoom(r2);

	r1->setSide(Room::Direction::north, factory.lock()->makeWall());
	r1->setSide(Room::Direction::east, factory.lock()->makeWall());
	r1->setSide(Room::Direction::south, factory.lock()->makeWall());
	r1->setSide(Room::Direction::west, factory.lock()->makeWall());

	r2->setSide(Room::Direction::north, factory.lock()->makeWall());
	r2->setSide(Room::Direction::east, factory.lock()->makeWall());
	r2->setSide(Room::Direction::south, factory.lock()->makeWall());
	r2->setSide(Room::Direction::west, factory.lock()->makeWall());

	return aMaze;
}