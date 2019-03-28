//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_SHAPE_H
#define CPP_SHAPE_H

#include <memory>

class Point;
class Manipulator;

class Shape {
public:
	Shape() = default;
	virtual ~Shape() = default;
	virtual void boundingBox(Point &bottomLeft, Point &topRight) const;
	virtual std::shared_ptr<Manipulator> createManipulator() const;
};


#endif //CPP_SHAPE_H
