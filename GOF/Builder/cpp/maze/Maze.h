#ifndef MAZE_H
#define MAZE_H

#include <memory>
#include <list>

class Room;

class Maze
{
public:
	Maze()= default;
	~Maze() = default;

	std::weak_ptr<Room> roomNo(int n);
	void addRoom(std::shared_ptr<Room> room);

private:
	std::list<std::shared_ptr<Room>> m_rooms;
};

#endif