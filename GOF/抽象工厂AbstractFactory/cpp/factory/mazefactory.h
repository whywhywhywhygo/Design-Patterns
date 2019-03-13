//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_MAZEFACTORY_H
#define CPP_MAZEFACTORY_H

#include <memory>

class Maze;
class Wall;
class Room;
class Door;

class MazeFactory {
public:
	MazeFactory() = default;
	virtual ~MazeFactory() = default;

	virtual std::shared_ptr<Maze> makeMaze() const;
	virtual std::shared_ptr<Wall> makeWall() const;
	virtual std::shared_ptr<Room> makeRoom(int n) const;
	virtual std::shared_ptr<Door> makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2) const;
};


#endif //CPP_MAZEFACTORY_H
