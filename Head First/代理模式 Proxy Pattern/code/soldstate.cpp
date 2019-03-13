//
// Created by gaojian on 18-11-2.
//

#include "soldstate.h"
#include "gumballmachine.h"
#include <iostream>

using std::cout;			using std::endl;

SoldState::SoldState(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void SoldState::insertQuarter()
{
	cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
	cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
	cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense()
{
	m_machine.lock()->releaseBall();
	if (m_machine.lock()->getCount() > 0)
		m_machine.lock()->setState(m_machine.lock()->getNoQuarterState());
	else
	{
		cout << "Oops, out of gumballs!" << endl;
		m_machine.lock()->setState(m_machine.lock()->getSoldOutState());
	}
}