//
// Created by 17271 on 2019/3/14.
//

#ifndef CPP_MAZEPROTOTYPEFACTORY_H
#define CPP_MAZEPROTOTYPEFACTORY_H

#include "MazeFactory.h"

class MazePrototypeFactory : public MazeFactory {
public:
    MazePrototypeFactory(std::shared_ptr<Maze> maze, std::shared_ptr<Wall> wall, std::shared_ptr<Room> room, std::shared_ptr<Door> door);
    std::shared_ptr<Maze> makeMaze() const override;
    std::shared_ptr<Wall> makeWall() const override;
    std::shared_ptr<Room> makeRoom(int n) const override;
    std::shared_ptr<Door> makeDoor(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);

private:
    std::shared_ptr<Maze> m_prototypeMaze;
    std::shared_ptr<Room> m_prototypeRoom;
    std::shared_ptr<Wall> m_prototypeWall;
    std::shared_ptr<Door> m_prototypeDoor;
};

#endif //CPP_MAZEPROTOTYPEFACTORY_H
