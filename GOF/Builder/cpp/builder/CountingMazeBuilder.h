#ifndef COUNTINGMAZEBUILDER_H
#define COUNTINGMAZEBUILDER_H

#include "MazeBuilder.h"

class CountingMazeBuilder :
	public MazeBuilder
{
public:
	CountingMazeBuilder();
	~CountingMazeBuilder() override = default;

	void buildMaze() override;
	void buildRoom(int n) override;
	void buildDoor(int n1, int n2) override;

	void getCounts(int &rooms, int &doors);

private:
	int m_rooms;
	int m_doors;
};

#endif