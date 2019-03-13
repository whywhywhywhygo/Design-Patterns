//
// Created by gaojian on 19-2-27.
//

#include "door.h"

Door::Door(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2)
	: m_r1{r1}, m_r2{r2}
{}