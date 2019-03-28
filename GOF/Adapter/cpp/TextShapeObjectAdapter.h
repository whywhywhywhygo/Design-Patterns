//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_TEXTSHAPEOBJECTADAPTER_H
#define CPP_TEXTSHAPEOBJECTADAPTER_H

#include "Shape.h"
#include <memory>

class TextView;

class TextShapeObjectAdapter : public Shape {
public:
	TextShapeObjectAdapter(std::shared_ptr<TextView> textView);
	void boundingBox(Point &bottomLeft, Point &topRight) const override;
	std::shared_ptr<Manipulator> createManipulator() const override;

	bool isEmpty() const;

private:
	std::shared_ptr<TextView> m_textView;
};


#endif //CPP_TEXTSHAPEOBJECTADAPTER_H
