//
// Created by gaojian on 18-11-6.
//

#include "gumballmonitor.h"
#include "gumballmachine.h"
#include <iostream>

using std::cout;				using std::endl;

GumballMonitor::GumballMonitor(std::weak_ptr<GumballMachine> machine)
	: m_machine{machine}
{}

void GumballMonitor::report()
{
	cout << "Gumball machine: " << m_machine.lock()->getLocation() << endl;
	cout << "Current inventory: " << m_machine.lock()->getCount() << " gumballs" << endl;
}