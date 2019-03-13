//
// Created by gaojian on 18-11-2.
//

#include "soldoutstate.h"
#include <iostream>

using std::cout;			using std::endl;

SoldOutState::SoldOutState(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void SoldOutState::insertQuarter()
{
	cout << "You can't insert a quarter, the machine is sold out" << endl;
}

void SoldOutState::ejectQuarter()
{
	cout << "You can't eject, you haven't inserted a quarter yet" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "You turned, but there are no gumballs" << endl;
}

void SoldOutState::dispense()
{
	cout << "No gumball dispensed" << endl;
}