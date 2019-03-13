#include <memory>
#include "director/MazeGame.h"
#include "builder/StandardMazeBuilder.h"
#include "builder/CountingMazeBuilder.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<MazeGame> game1 = make_shared<MazeGame>();
	shared_ptr<StandardMazeBuilder> builder1 = make_shared<StandardMazeBuilder>();
	game1->createMaze(builder1);
	shared_ptr<Maze> maze1 = builder1->getMaze();

	shared_ptr<MazeGame> game2 = make_shared<MazeGame>();
	shared_ptr<CountingMazeBuilder> builder2 = make_shared<CountingMazeBuilder>();
	game2->createMaze(builder2);
	int rooms, doors;
	builder2->getCounts(rooms, doors);

	return 0;
}