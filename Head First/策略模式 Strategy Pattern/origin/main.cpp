#include <iostream>
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main()
{
	MallardDuck mallard;
	RedheadDuck redhead;
	RubberDuck rubber;

	mallard.display();
	mallard.quack();
	mallard.fly();
	mallard.swim();

	redhead.display();
	redhead.quack();
	redhead.fly();
	redhead.swim();

	rubber.display();
	rubber.quack();
	rubber.fly();
	rubber.swim();

	return 0;
}