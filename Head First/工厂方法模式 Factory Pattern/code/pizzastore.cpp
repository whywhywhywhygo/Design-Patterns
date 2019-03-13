//
// Created by gaojian on 18-10-12.
//

#include "pizzastore.h"
#include "pizza.h"
#include <iostream>

using std::shared_ptr;		using std::make_shared;
using std::cout;			using std::endl;

void PizzaStore::orderPizza(std::string pizzaType)
{
	shared_ptr<Pizza> pizza= createPizza(pizzaType);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
}