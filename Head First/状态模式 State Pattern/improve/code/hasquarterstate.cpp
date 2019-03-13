//
// Created by gaojian on 18-11-2.
//

#include "hasquarterstate.h"
#include "gumballmachine.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;			using std::endl;
using std::srand;			using std::rand;
using std::time;

HasQuarterState::HasQuarterState(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void HasQuarterState::insertQuarter()
{
	cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "Quarter returned" << endl;
	m_machine.lock()->setState(m_machine.lock()->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "You turned..." << endl;
	srand(static_cast<unsigned int>(time(NULL)));
	if(rand() % 10 == 0 && m_machine.lock()->getCount() > 1)
		m_machine.lock()->setState(m_machine.lock()->getWinnerState());
	else
		m_machine.lock()->setState(m_machine.lock()->getSoldState());
}

void HasQuarterState::dispense()
{
	cout << "No gumball dispensed" << endl;
}