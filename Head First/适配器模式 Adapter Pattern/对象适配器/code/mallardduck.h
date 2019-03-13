//
// Created by gaojian on 18-10-21.
//

#ifndef CODE_MALLARDDUCK_H
#define CODE_MALLARDDUCK_H

#include "duck.h"

class MallardDuck : public Duck {
public:
	MallardDuck() = default;

	void quack() override;
	void fly() override;
};


#endif //CODE_MALLARDDUCK_H
