//
// Created by gaojian on 18-10-8.
//

#ifndef DESIGN_PATTERNS_RUBBERDUCK_H
#define DESIGN_PATTERNS_RUBBERDUCK_H

#include "duck.h"

class RubberDuck : public Duck{
public:
	RubberDuck();

	void quack();
	void fly();
	void display();
};


#endif //DESIGN_PATTERNS_RUBBERDUCK_H
