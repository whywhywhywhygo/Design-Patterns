//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_POINT_H
#define CPP_POINT_H

#include "Coord.h"

class Point {
public:
	Point(Coord x, Coord y);

private:
	Coord m_x;
	Coord m_y;
};


#endif //CPP_POINT_H
