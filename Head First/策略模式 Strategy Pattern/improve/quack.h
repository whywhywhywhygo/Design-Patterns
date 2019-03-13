//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_QUACK_H
#define IMPROVE_QUACK_H

#include "quackbehavior.h"

class Quack : public QuackBehavior {
public:
	Quack();

	virtual void quack() override;
};


#endif //IMPROVE_QUACK_H
