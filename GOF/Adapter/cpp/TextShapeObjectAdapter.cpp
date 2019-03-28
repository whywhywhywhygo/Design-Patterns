//
// Created by 17271 on 2019/3/27.
//

#include "TextShapeObjectAdapter.h"
#include "Coord.h"
#include "TextView.h"
#include "Point.h"
#include "TextManipulator.h"

using std::make_shared;

TextShapeObjectAdapter::TextShapeObjectAdapter(std::shared_ptr<TextView> textView)
	: m_textView{textView}
{}

void TextShapeObjectAdapter::boundingBox(Point &bottomLeft, Point &topRight) const
{
	Coord bottom, left, width, height;

	m_textView->getOrigin(bottom, left);
	m_textView->getExtent(width, height);

	bottomLeft = Point(bottom, left);
	topRight = Point(bottom + height, left + width);
}

std::shared_ptr<Manipulator> TextShapeObjectAdapter::createManipulator() const
{
	return make_shared<TextManipulator>();
}

bool TextShapeObjectAdapter::isEmpty() const
{
	return m_textView->isEmpty();
}