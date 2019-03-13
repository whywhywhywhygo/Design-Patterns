#include <iostream>
#include "Creator/EnchantedMazeGame.h"
#include "Creator/BombedMazeGame.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<MazeGame> creator1 = make_shared<EnchantedMazeGame>();
	shared_ptr<Maze> maze1 = creator1->createMaze();

	shared_ptr<MazeGame> creator2 = make_shared<BombedMazeGame>();
	shared_ptr<Maze> maze2 = creator2->createMaze();

	return 0;
}