#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#include "MazeBuilder.h"
#include <memory>

class Maze;

class StandardMazeBuilder :
		public MazeBuilder
{
public:
	StandardMazeBuilder() = default;
	~StandardMazeBuilder() override = default;

	void buildMaze() override;
	void buildRoom(int n) override;
	void buildDoor(int n1, int n2) override;

	std::shared_ptr<Maze> getMaze();

private:
	std::shared_ptr<Maze> m_currentMaze;
};

#endif