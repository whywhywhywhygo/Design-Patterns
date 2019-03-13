//
// Created by gaojian on 19-3-7.
//

#include "MazeGame.h"
#include "../maze/maze.h"
#include "../maze/room.h"
#include "../maze/door.h"
#include "../maze/wall.h"

using std::make_shared;

MazeGame::~MazeGame()
{}

std::shared_ptr<Maze> MazeGame::createMaze()
{
	std::shared_ptr<Maze> maze = makeMaze();

	std::shared_ptr<Room> r1 = makeRoom(1);
	std::shared_ptr<Room> r2 = makeRoom(2);

	std::shared_ptr<Door> door = makeDoor(r1, r2);

	r1->setSide(Room::Direction::North, makeWall());
	r1->setSide(Room::Direction::East, makeWall());
	r1->setSide(Room::Direction::South, makeWall());
	r1->setSide(Room::Direction::West, makeWall());

	r2->setSide(Room::Direction::North, makeWall());
	r2->setSide(Room::Direction::East, makeWall());
	r2->setSide(Room::Direction::South, makeWall());
	r2->setSide(Room::Direction::West, makeWall());

	return maze;
}

std::shared_ptr<Maze> MazeGame::makeMaze() const
{
	return make_shared<Maze>();
}

std::shared_ptr<Room> MazeGame::makeRoom(int n) const
{
	return make_shared<Room>(n);
}

std::shared_ptr<Wall> MazeGame::makeWall() const
{
	return make_shared<Wall>();
}

std::shared_ptr<Door> MazeGame::makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const
{
	return make_shared<Door>(r1, r2);
}
