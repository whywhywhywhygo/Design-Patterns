//
// Created by 17271 on 2019/3/27.
//

#include <xutility>
#include "Coord.h"

Coord::Coord(int x, int y)
	: m_x{x}, m_y{y}
{}

Coord operator+(Coord &a, Coord &b)
{
	return std::move(Coord(a.m_x + b.m_x, a.m_y + b.m_y));
}