//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_NYPIZZASTORE_H
#define CODE_NYPIZZASTORE_H

#include "pizzastore.h"
#include "cheesepizza.h"
#include "pizzaingredientfactory.h"
#include "nypizzaingredientfactory.h"

class NYPizzaStore : public PizzaStore {
public:
	NYPizzaStore() = default;

protected:
	std::shared_ptr<Pizza> createPizza(std::string pizzaType) override
	{
		std::shared_ptr<Pizza> pizza;
		std::shared_ptr<PizzaIngredientFactory> factory = std::make_shared<NYPizzaIngredientFactory>(NYPizzaIngredientFactory());

		if (pizzaType == "cheese")
			pizza = std::make_shared<CheesePizza>(CheesePizza(factory));

		return pizza;
	}
};

#endif //CODE_NYPIZZASTORE_H
