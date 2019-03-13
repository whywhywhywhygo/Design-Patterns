//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_DUCK_H
#define IMPROVE_DUCK_H

#include "flybehavior.h"
#include "quackbehavior.h"
#include <memory>

class Duck {
public:
	Duck();

	void performQuack();
	void performFly();
	void swim();
	void setFlyBehavior(std::shared_ptr<FlyBehavior> fb);
	void setQuackBehavior(std::shared_ptr<QuackBehavior> qb);
	virtual void display() = 0;

protected:
	std::shared_ptr<FlyBehavior> m_flyBehavior;
	std::shared_ptr<QuackBehavior> m_quackBehavior;
};


#endif //IMPROVE_DUCK_H
