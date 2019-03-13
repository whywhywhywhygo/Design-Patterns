//
// Created by gaojian on 18-11-2.
//

#include "noquarterstate.h"
#include "gumballmachine.h"
#include <iostream>

using std::cout;				using std::endl;

NoQuarterState::NoQuarterState(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void NoQuarterState::insertQuarter()
{
	cout << "You inserted a quarter" << endl;
	m_machine.lock()->setState(m_machine.lock()->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense()
{
	cout << "You need to pay first" << endl;
}