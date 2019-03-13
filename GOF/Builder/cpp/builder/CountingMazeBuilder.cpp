#include "CountingMazeBuilder.h"

CountingMazeBuilder::CountingMazeBuilder()
	: m_rooms{ 0 }, m_doors{ 0 }
{}

void CountingMazeBuilder::buildMaze()
{}

void CountingMazeBuilder::buildRoom(int n)
{
	++m_rooms;
}

void CountingMazeBuilder::buildDoor(int n1, int n2)
{
	++m_doors;
}

void CountingMazeBuilder::getCounts(int &rooms, int &doors)
{
	rooms = m_rooms;
	doors = m_doors;
}