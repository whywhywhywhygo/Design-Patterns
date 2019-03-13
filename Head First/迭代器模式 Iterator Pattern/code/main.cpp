#include <iostream>
#include "dinermenu.h"
#include "waitress.h"

int main()
{
	DinerMenu dinerMenu;
	Waitress waitress(&dinerMenu);

	waitress.printMenu();

	return 0;
}