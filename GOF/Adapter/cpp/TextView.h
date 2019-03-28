//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_TEXTVIEW_H
#define CPP_TEXTVIEW_H

class Coord;

class TextView {
public:
	TextView() = default;
	virtual ~TextView() = default;

	void getOrigin(Coord &x, Coord &y) const;
	void getExtent(Coord &width, Coord &height) const;
	virtual bool isEmpty() const;
};


#endif //CPP_TEXTVIEW_H
