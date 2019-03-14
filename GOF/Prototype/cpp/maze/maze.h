//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_MAZE_H
#define CPP_MAZE_H

#include <memory>
#include <list>

class Room;

class Maze : public std::enable_shared_from_this<Maze> {
public:
	Maze() = default;
	explicit Maze(std::shared_ptr<Maze> maze);

	void addRoom(std::shared_ptr<Room> room);
	std::shared_ptr<Maze> clone();

private:
	std::list<std::shared_ptr<Room>> m_rooms;
};


#endif //CPP_MAZE_H
