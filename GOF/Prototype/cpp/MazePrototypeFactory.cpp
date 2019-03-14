//
// Created by 17271 on 2019/3/14.
//

#include "MazePrototypeFactory.h"
#include "maze/maze.h"
#include "maze/wall.h"
#include "maze/room.h"
#include "maze/door.h"

using std::shared_ptr;              using std::make_shared;

MazePrototypeFactory::MazePrototypeFactory(std::shared_ptr<Maze> maze, std::shared_ptr<Wall> wall,
                                           std::shared_ptr<Room> room, std::shared_ptr<Door> door)
    : m_prototypeMaze{maze}, m_prototypeWall{wall}, m_prototypeRoom{room}, m_prototypeDoor{door}
{}

std::shared_ptr<Maze> MazePrototypeFactory::makeMaze() const
{
    return m_prototypeMaze->clone();
}

std::shared_ptr<Wall> MazePrototypeFactory::makeWall() const
{
    return std::dynamic_pointer_cast<Wall>(m_prototypeWall->clone());
}

std::shared_ptr<Room> MazePrototypeFactory::makeRoom(int n) const
{
    shared_ptr<Room> room = std::dynamic_pointer_cast<Room>(m_prototypeRoom->clone());
    room->initialize(n);
    return room;
}

std::shared_ptr<Door> MazePrototypeFactory::makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2)
{
    shared_ptr<Door> door = std::dynamic_pointer_cast<Door>(m_prototypeDoor->clone());
    door->initialize(r1, r2);
    return door;
}