#include <iostream>
#include <memory>
#include "gumballmachine.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<GumballMachine> machine = make_shared<GumballMachine>(GumballMachine(5));

	machine->init();

	machine->insertQuarter();
	machine->turnCrank();

	machine->insertQuarter();
	machine->ejectQuarter();
	machine->turnCrank();

	machine->insertQuarter();
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
	machine->turnCrank();

	return 0;
}