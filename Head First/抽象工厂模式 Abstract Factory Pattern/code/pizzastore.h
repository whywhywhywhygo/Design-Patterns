//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_PIZZASTORE_H
#define CODE_PIZZASTORE_H

#include <string>
#include <memory>
#include "pizza.h"

class PizzaStore {
public:
	PizzaStore() = default;

	void orderPizza(std::string pizzaType)
	{
		std::shared_ptr<Pizza> pizza = createPizza(pizzaType);
		pizza->prepare();
		pizza->bake();
		pizza->box();
		pizza->cut();
	}

protected:
	virtual std::shared_ptr<Pizza> createPizza(std::string pizzaType) = 0;
};

#endif //CODE_PIZZASTORE_H
