//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_SQUEAK_H
#define IMPROVE_SQUEAK_H

#include "quackbehavior.h"

class Squeak : public QuackBehavior {
public:
	Squeak();

	virtual void quack() override;
};

#endif //IMPROVE_SQUEAK_H
