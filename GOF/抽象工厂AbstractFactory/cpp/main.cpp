#include <iostream>
#include <memory>
#include "mazegame.h"
#include "factory/bombedmazefactory.h"

using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<MazeGame> game = make_shared<MazeGame>();
	shared_ptr<BombedMazeFactory> factory = make_shared<BombedMazeFactory>();

	game->createMaze(factory);

	return 0;
}