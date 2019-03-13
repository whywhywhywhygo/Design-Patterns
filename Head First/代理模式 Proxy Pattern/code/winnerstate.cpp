//
// Created by gaojian on 18-11-2.
//

#include "winnerstate.h"
#include "gumballmachine.h"
#include <iostream>

using std::cout;			using std::endl;

WinnerState::WinnerState(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void WinnerState::insertQuarter()
{
	cout << "You are winner, don't need to insert a quarter" << endl;
}

void WinnerState::ejectQuarter()
{
	cout << "No quarter inserted" << endl;
}

void WinnerState::turnCrank()
{
	cout << "Can't turn crank" << endl;
}

void WinnerState::dispense()
{
	cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
	m_machine.lock()->releaseBall();
	if (m_machine.lock()->getCount() == 0)
		m_machine.lock()->setState(m_machine.lock()->getSoldOutState());
	else
	{
		m_machine.lock()->releaseBall();
		if (m_machine.lock()->getCount() == 0)
			m_machine.lock()->setState(m_machine.lock()->getNoQuarterState());
		else
		{
			cout << "Oops, out of gumballs" << endl;
			m_machine.lock()->setState(m_machine.lock()->getSoldOutState());
		}
	}
}