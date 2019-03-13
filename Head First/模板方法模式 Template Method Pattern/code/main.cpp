#include <iostream>
#include "teawithhook.h"
#include "coffeewithhook.h"

int main()
{
	TeaWithHook tea;
	CoffeeWithHook coffee;

	tea.prepareRecipe();
	coffee.prepareRecipe();

	return 0;
}