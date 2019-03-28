//
// Created by 17271 on 2019/3/27.
//

#include "Shape.h"
#include "Manipulator.h"

using std::make_shared;

void Shape::boundingBox(Point &bottomLeft, Point &topRight) const
{}

std::shared_ptr<Manipulator> Shape::createManipulator() const
{
	return make_shared<Manipulator>();
}