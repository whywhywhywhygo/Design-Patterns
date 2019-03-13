//
// Created by gaojian on 18-11-2.
//

#include "gumballmachine.h"
#include <iostream>

using std::cout;			using std::endl;

GumballMachine::GumballMachine(int count)
	: m_count{count}
{
	if(count > 0)
		m_state = NO_QUARTER;
}

void GumballMachine::insertQuarter()
{
	if (m_state == HAS_QUARTER)
		cout << "You can't insert another quarter" << endl;
	else if (m_state == NO_QUARTER)
	{
		m_state = HAS_QUARTER;
		cout << "You inserted a quarter" << endl;
	}
	else if (m_state == SOLD_OUT)
		cout << "You can't insert a quarter, the machine is sold out" << endl;
	else if (m_state == SOLD)
		cout << "Please wait, we're already giving you a gumball" << endl;
}

void GumballMachine::ejectQuarter()
{
	if (m_state == HAS_QUARTER)
	{
		cout << "Quarter returned" << endl;
		m_state = NO_QUARTER;
	}
	else if (m_state == NO_QUARTER)
		cout << "You haven't inserted a quarter" << endl;
	else if (m_state == SOLD)
		cout << "Sorry, you already turned the crank" << endl;
	else if (m_state == SOLD_OUT)
		cout << "You can't eject, you haven't inserted q quarter yet" << endl;
}

void GumballMachine::turnCrank()
{
	if (m_state == SOLD)
		cout << "Turning twice doesn't get you another gumball!" << endl;
	else if (m_state == NO_QUARTER)
		cout << "You turned but there's no quarter" << endl;
	else if (m_state == SOLD_OUT)
		cout << "You turned, but there are no gumballs" << endl;
	else if (m_state == HAS_QUARTER)
	{
		cout << "You turned..." << endl;
		m_state = SOLD;
		dispense();
	}
}

void GumballMachine::dispense()
{
	if (m_state == SOLD)
	{
		cout << "A gumball comes rolling out the slot" << endl;
		--m_count;
		if (m_count == 0)
		{
			cout << "Oops, out of gumballs!" << endl;
			m_state = SOLD_OUT;
		}
		else
			m_state = NO_QUARTER;
	}
	else if (m_state == NO_QUARTER)
		cout << "You need to pay first" << endl;
	else if (m_state == SOLD_OUT)
		cout << "No gumball dispensed" << endl;
	else if (m_state == HAS_QUARTER)
		cout << "No gumball dispensed" << endl;
}