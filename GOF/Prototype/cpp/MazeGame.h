//
// Created by 17271 on 2019/3/14.
//

#ifndef CPP_MAZEGAME_H
#define CPP_MAZEGAME_H

#include <memory>

class Maze;
class MazeFactory;

class MazeGame {
public:
    std::shared_ptr<Maze> createMaze(std::weak_ptr<MazeFactory> factory);
};


#endif //CPP_MAZEGAME_H
