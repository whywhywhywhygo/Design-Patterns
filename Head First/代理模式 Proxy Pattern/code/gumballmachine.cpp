//
// Created by gaojian on 18-11-2.
//

#include "gumballmachine.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
#include "winnerstate.h"
#include <iostream>

using std::make_shared;			using std::cout;
using std::endl;

GumballMachine::GumballMachine(std::string &&location, int numberGumballs)
	: m_location{location}, m_count{numberGumballs}
{}

void GumballMachine::init()
{
	m_soldOutState = make_shared<SoldOutState>(SoldOutState(weak_from_this()));
	m_noQuarterState = make_shared<NoQuarterState>(NoQuarterState(weak_from_this()));
	m_hasQuarterState = make_shared<HasQuarterState>(HasQuarterState(weak_from_this()));
	m_soldState = make_shared<SoldState>(SoldState(weak_from_this()));
	m_winnerState = make_shared<WinnerState>(WinnerState(weak_from_this()));
	if(m_count > 0)
		m_state = m_noQuarterState;
	else
		m_state = m_soldOutState;
}

void GumballMachine::insertQuarter()
{
	m_state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	m_state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	m_state->turnCrank();
	m_state->dispense();
}

void GumballMachine::setState(std::shared_ptr<State> state)
{
	m_state = state;
}

void GumballMachine::releaseBall()
{
	cout << "A gumball comes rolling out the slot..." << endl;
	if (m_count != 0)
		--m_count;
}

std::shared_ptr<State> GumballMachine::getSoldOutState() const
{
	return m_soldOutState;
}

std::shared_ptr<State> GumballMachine::getNoQuarterState() const
{
	return m_noQuarterState;
}

std::shared_ptr<State> GumballMachine::getHasQuarterState() const
{
	return m_hasQuarterState;
}

std::shared_ptr<State> GumballMachine::getSoldState() const
{
	return m_soldState;
}

std::shared_ptr<State> GumballMachine::getWinnerState() const
{
	return m_winnerState;
}

std::string GumballMachine::getLocation() const
{
	return m_location;
}

int GumballMachine::getCount() const
{
	return m_count;
}