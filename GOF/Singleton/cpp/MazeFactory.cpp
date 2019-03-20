//
// Created by 17271 on 2019/3/20.
//

#include "MazeFactory.h"
#include "BombedMazeFactory.h"
#include "EnchantedMazeFactory.h"
#include <string>

using std::string;

MazeFactory *MazeFactory::m_factory = nullptr;

MazeFactory *MazeFactory::getInstance()
{
	if(m_factory == nullptr)
	{
		string mazeStyle = getenv("MAZESTYLE") ? getenv("MAZESTYLE") : "";
		if(mazeStyle == "bombed")
			m_factory = new BombedMazeFactory();
		else if(mazeStyle == "enchanted")
			m_factory = new EnchantedMazeFactory();
		else
			m_factory = new MazeFactory();
	}
	return m_factory;
}