//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_BOMBEDMAZEFACTORY_H
#define CPP_BOMBEDMAZEFACTORY_H

#include "mazefactory.h"

class BombedMazeFactory : public MazeFactory {
public:
	~BombedMazeFactory() override = default;

	std::shared_ptr<Wall> makeWall() const override;
	std::shared_ptr<Room> makeRoom(int n) const override;
};


#endif //CPP_BOMBEDMAZEFACTORY_H
