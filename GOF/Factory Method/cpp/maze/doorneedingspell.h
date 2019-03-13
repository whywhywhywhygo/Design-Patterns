//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_DOORNEEDINGSPELL_H
#define CPP_DOORNEEDINGSPELL_H

#include "door.h"

class DoorNeedingSpell : public Door {
public:
	DoorNeedingSpell(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2);
	~DoorNeedingSpell() override = default;
};


#endif //CPP_DOORNEEDINGSPELL_H
