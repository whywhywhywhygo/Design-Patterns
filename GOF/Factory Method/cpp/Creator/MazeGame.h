//
// Created by gaojian on 19-3-7.
//

#ifndef CPP_MAZEGAME_H
#define CPP_MAZEGAME_H

#include <memory>

class Maze;
class Room;
class Wall;
class Door;

class MazeGame {
public:
	virtual ~MazeGame() = 0;

	std::shared_ptr<Maze> createMaze();

	virtual std::shared_ptr<Maze> makeMaze() const;
	virtual std::shared_ptr<Room> makeRoom(int n) const;
	virtual std::shared_ptr<Wall> makeWall() const;
	virtual std::shared_ptr<Door> makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const;
};


#endif //CPP_MAZEGAME_H
