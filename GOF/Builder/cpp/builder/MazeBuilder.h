#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

#include <memory>

class Maze;

class MazeBuilder
{
public:
	virtual ~MazeBuilder() = 0;

	virtual void buildMaze();
	virtual void buildRoom(int n);
	virtual void buildDoor(int n1, int n2);
	virtual std::shared_ptr<Maze> getMaze();
};

#endif