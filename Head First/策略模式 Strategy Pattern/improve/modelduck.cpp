//
// Created by gaojian on 18-10-10.
//

#include "modelduck.h"
#include "flynoway.h"
#include "quack.h"
#include <memory>
#include <iostream>

using std::cout;				using std::endl;
using std::make_shared;

ModelDuck::ModelDuck()
{
	m_flyBehavior = make_shared<FlyNoWay>(FlyNoWay());
	m_quackBehavior = make_shared<Quack>(Quack());
}

void ModelDuck::display()
{
	cout << "Display model duck" << endl;
}