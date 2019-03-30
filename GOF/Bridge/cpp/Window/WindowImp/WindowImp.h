//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_WINDOWIMP_H
#define CPP_WINDOWIMP_H

#include "../../Coord.h"
#include <string>

class Point;

class WindowImp {
public:
	virtual ~WindowImp() = 0;

	virtual void impTop() = 0;
	virtual void impBottom() = 0;
	virtual void impSetExtent(Point &p) = 0;
	virtual void impSetOrigin(Point &p) = 0;
	virtual void deviceRect(Coord topLeft, Coord bottomLeft, Coord topRight, Coord bottomRight) = 0;
	virtual void deviceText(std::string text, Coord c1, Coord c2) = 0;
	virtual void deviceBitmap(std::string bitmapName, Coord c1, Coord c2) = 0;
};


#endif //CPP_WINDOWIMP_H
