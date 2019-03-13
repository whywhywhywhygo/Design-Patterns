//
// Created by gaojian on 18-10-12.
//

#ifndef CODE_NYSTYLEPIZZASTORE_H
#define CODE_NYSTYLEPIZZASTORE_H

#include "pizzastore.h"
#include <memory>

class Pizza;

class NYStylePizzaStore : public PizzaStore {
public:
	NYStylePizzaStore() = default;

	std::shared_ptr<Pizza> createPizza(std::string pizzaType) override;
};


#endif //CODE_NYSTYLEPIZZASTORE_H
