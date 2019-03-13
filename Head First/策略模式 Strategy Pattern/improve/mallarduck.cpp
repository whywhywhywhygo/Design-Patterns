//
// Created by gaojian on 18-10-10.
//

#include "mallarduck.h"
#include "flywithwings.h"
#include "quack.h"
#include <iostream>
#include <memory>

using std::cout;			using std::endl;
using std::make_shared;

MallardDuck::MallardDuck()
{
	m_flyBehavior = make_shared<FlyWithWings>(FlyWithWings());
	m_quackBehavior = make_shared<Quack>(Quack());
}

void MallardDuck::display()
{
	cout << "Display mallar duck" << endl;
}