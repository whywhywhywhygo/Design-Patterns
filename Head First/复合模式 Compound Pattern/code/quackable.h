//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_QUACKABLE_H
#define CODE_QUACKABLE_H

#include "quackobservable.h"

class Quackable : public QuackObservable {
public:
	virtual void quack() = 0;
};

#endif //CODE_QUACKABLE_H
