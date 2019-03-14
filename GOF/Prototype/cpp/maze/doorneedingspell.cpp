//
// Created by gaojian on 19-2-27.
//

#include "doorneedingspell.h"

using std::make_shared;

DoorNeedingSpell::DoorNeedingSpell(std::weak_ptr<Room> r1, std::weak_ptr<Room> r2)
	: Door{r1, r2}
{}

DoorNeedingSpell::DoorNeedingSpell(std::shared_ptr<DoorNeedingSpell> door)
	: Door{door}
{}

std::shared_ptr<MapSite> DoorNeedingSpell::clone()
{
	return make_shared<DoorNeedingSpell>(std::dynamic_pointer_cast<DoorNeedingSpell>(shared_from_this()));
}