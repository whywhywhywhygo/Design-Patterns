//
// Created by 17271 on 2019/3/20.
//

#ifndef CPP_MAZEFACTORY_H
#define CPP_MAZEFACTORY_H


class MazeFactory {
public:
	static MazeFactory *getInstance();

protected:
	MazeFactory() = default;

private:
	static MazeFactory *m_factory;
};


#endif //CPP_MAZEFACTORY_H
