//
// Created by gaojian on 18-10-10.
//

#include "duck.h"
#include <iostream>

using std::cout;		using std::endl;
using std::shared_ptr;

Duck::Duck()
{}

void Duck::performFly()
{
	m_flyBehavior->fly();
}

void Duck::performQuack()
{
	m_quackBehavior->quack();
}

void Duck::swim()
{
	cout << "Duck swim" << endl;
}

void Duck::setFlyBehavior(std::shared_ptr<FlyBehavior> fb)
{
	m_flyBehavior = fb;
}

void Duck::setQuackBehavior(std::shared_ptr<QuackBehavior> qb)
{
	m_quackBehavior = qb;
}