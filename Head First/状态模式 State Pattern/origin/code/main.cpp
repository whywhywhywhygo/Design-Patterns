#include <iostream>
#include "gumballmachine.h"

int main()
{
	GumballMachine machine(5);

	machine.insertQuarter();
	machine.turnCrank();

	machine.insertQuarter();
	machine.ejectQuarter();
	machine.turnCrank();

	machine.insertQuarter();
	machine.turnCrank();
	machine.insertQuarter();
	machine.turnCrank();
	machine.ejectQuarter();

	machine.insertQuarter();
	machine.insertQuarter();
	machine.turnCrank();
	machine.insertQuarter();
	machine.turnCrank();
	machine.insertQuarter();
	machine.turnCrank();

	return 0;
}