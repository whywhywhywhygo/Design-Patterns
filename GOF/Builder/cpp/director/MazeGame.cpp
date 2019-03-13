#include "MazeGame.h"
#include "../builder/MazeBuilder.h"

std::shared_ptr<Maze> MazeGame::createMaze(std::weak_ptr<MazeBuilder> builder)
{
	builder.lock()->buildMaze();
	builder.lock()->buildRoom(1);
	builder.lock()->buildRoom(2);
	builder.lock()->buildDoor(1, 2);

	return builder.lock()->getMaze();
}
