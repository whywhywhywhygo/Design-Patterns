//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_MUTEQUACK_H
#define IMPROVE_MUTEQUACK_H

#include "quackbehavior.h"

class MuteQuack : public QuackBehavior {
public:
	MuteQuack();

	virtual void quack() override;
};

#endif //IMPROVE_MUTEQUACK_H
