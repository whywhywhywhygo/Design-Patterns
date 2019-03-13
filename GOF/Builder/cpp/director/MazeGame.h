#include <memory>

class Maze;
class MazeBuilder;

class MazeGame
{
public:
	MazeGame() = default;
	~MazeGame() = default;

	std::shared_ptr<Maze> createMaze(std::weak_ptr<MazeBuilder> builder);
};

