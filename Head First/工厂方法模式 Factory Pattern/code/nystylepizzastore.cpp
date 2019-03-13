//
// Created by gaojian on 18-10-12.
//

#include "nystylepizzastore.h"
#include "pizza.h"
#include "cheesepizza.h"

using std::make_shared;			using std::shared_ptr;

std::shared_ptr<Pizza> NYStylePizzaStore::createPizza(std::string pizzaType)
{
	shared_ptr<Pizza> pizza;

	if(pizzaType == "cheese")
		pizza = make_shared<CheesePizza>(CheesePizza());
	
	return pizza;
}