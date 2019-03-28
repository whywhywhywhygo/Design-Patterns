//
// Created by 17271 on 2019/3/27.
//

#include "TextShapeClassAdapter.h"
#include "Coord.h"
#include "Point.h"
#include "TextManipulator.h"

using std::make_shared;

void TextShapeClassAdapter::boundingBox(Point &bottomLeft, Point &topRight) const
{
	Coord bottom, left, width, height;

	getOrigin(bottom, left);
	getExtent(width, height);

	bottomLeft = Point(bottom, left);
	topRight = Point(bottom + height, left + width);
}

std::shared_ptr<Manipulator> TextShapeClassAdapter::createManipulator() const
{
	return make_shared<TextManipulator>();
}

bool TextShapeClassAdapter::isEmpty() const
{
	return TextView::isEmpty();
}