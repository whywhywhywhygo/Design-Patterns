#include "StandardMazeBuilder.h"
#include "../maze/Maze.h"
#include "../maze/Room.h"
#include "../maze/Wall.h"
#include "../maze/Door.h"

using std::make_shared;

void StandardMazeBuilder::buildMaze()
{
	m_currentMaze = make_shared<Maze>();
}

void StandardMazeBuilder::buildRoom(int n)
{
	if (m_currentMaze->roomNo(n).lock())
	{
		std::shared_ptr<Room> room = make_shared<Room>(n);
		m_currentMaze->addRoom(room);
		room->setSide(Room::Direction::North, make_shared<Wall>());
		room->setSide(Room::Direction::South, make_shared<Wall>());
		room->setSide(Room::Direction::East, make_shared<Wall>());
		room->setSide(Room::Direction::West, make_shared<Wall>());
	}
}

void StandardMazeBuilder::buildDoor(int n1, int n2)
{
	std::weak_ptr<Room> r1 = m_currentMaze->roomNo(n1);
	std::weak_ptr<Room> r2 = m_currentMaze->roomNo(n2);
	std::weak_ptr<Door> door = make_shared<Door>(r1, r2);

	//TODO
	/*r1->setSide(commonWall(r1, r2), d);
	r2->setSide(commonWall(r1, r2), d);*/
}

std::shared_ptr<Maze> StandardMazeBuilder::getMaze()
{
	return m_currentMaze;
}
