#include <iostream>
#include <memory>
#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include "maze/maze.h"
#include "maze/wall.h"
#include "maze/door.h"
#include "maze/room.h"

using std::shared_ptr;          using std::make_shared;

int main() {
    shared_ptr<MazeGame> mazeGame = make_shared<MazeGame>();
    shared_ptr<MazePrototypeFactory> simpleMazeFactory = make_shared<MazePrototypeFactory>(
            make_shared<Maze>(), make_shared<Wall>(), make_shared<Room>(), make_shared<Door>()
            );

    shared_ptr<Maze> maze = mazeGame->createMaze(simpleMazeFactory);

    return 0;
}