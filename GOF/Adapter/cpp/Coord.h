//
// Created by 17271 on 2019/3/27.
//

#ifndef CPP_COORD_H
#define CPP_COORD_H


class Coord {
	friend Coord operator+(Coord &a, Coord &b);
public:
	Coord() = default;
	Coord(int x, int y);

private:
	int m_x;
	int m_y;
};

Coord operator+(Coord &a, Coord &b);

#endif //CPP_COORD_H
