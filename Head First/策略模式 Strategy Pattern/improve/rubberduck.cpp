//
// Created by gaojian on 18-10-10.
//

#include "rubberduck.h"
#include "flynoway.h"
#include "mutequack.h"
#include <iostream>
#include <memory>

using std::cout;			using std::endl;
using std::make_shared;

RubberDuck::RubberDuck()
{
	m_flyBehavior = make_shared<FlyNoWay>(FlyNoWay());
	m_quackBehavior = make_shared<MuteQuack>(MuteQuack());
}

void RubberDuck::display()
{
	cout << "Display rubber duck" << endl;
}