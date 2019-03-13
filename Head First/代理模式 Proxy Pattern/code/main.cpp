#include <iostream>
#include <memory>
#include "gumballmachine.h"
#include "gumballmonitor.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<GumballMachine> machine = make_shared<GumballMachine>(GumballMachine("machine", 5));
	shared_ptr<GumballMonitor> monitor = make_shared<GumballMonitor>(GumballMonitor(machine));

	machine->init();

	machine->insertQuarter();
	machine->turnCrank();
	monitor->report();

	machine->insertQuarter();
	machine->ejectQuarter();
	machine->turnCrank();
	monitor->report();

	/*machine->insertQuarter();
	machine->turnCrank();
	machine->insertQuarter();
	machine->turnCrank();
	machine->ejectQuarter();

	machine->insertQuarter();
	machine->insertQuarter();
	machine->turnCrank();
	machine->insertQuarter();
	machine->turnCrank();
	machine->insertQuarter();
	machine->turnCrank();*/

	return 0;
}