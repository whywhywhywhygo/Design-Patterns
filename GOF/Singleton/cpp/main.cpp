#include <iostream>
#include "BombedMazeFactory.h"
#include "EnchantedMazeFactory.h"

int main() {
	BombedMazeFactory::getInstance();
	EnchantedMazeFactory::getInstance();
	return 0;
}