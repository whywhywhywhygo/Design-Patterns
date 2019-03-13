//
// Created by gaojian on 18-10-12.
//

#ifndef CODE_PIZZASTORE_H
#define CODE_PIZZASTORE_H

#include <memory>
#include <string>

class Pizza;

class PizzaStore {
public:
	PizzaStore() = default;

	virtual void orderPizza(std::string pizzaType) final;

protected:
	virtual std::shared_ptr<Pizza> createPizza(std::string pizzaType) = 0;
};


#endif //CODE_PIZZASTORE_H
