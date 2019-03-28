//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_TEXTSHAPE_H
#define CPP_TEXTSHAPE_H

#include "Shape.h"
#include "TextView.h"

class TextShapeClassAdapter : public Shape, public TextView {
public:
	TextShapeClassAdapter() = default;
	~TextShapeClassAdapter() override = default;

	void boundingBox(Point &bottomLeft, Point &topRight) const override;
	std::shared_ptr<Manipulator> createManipulator() const override;
	bool isEmpty() const override;
};


#endif //CPP_TEXTSHAPE_H
