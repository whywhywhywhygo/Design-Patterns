//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_PIZZAINGREDIENTFACTORY_H
#define CODE_PIZZAINGREDIENTFACTORY_H

#include <memory>

class Dough;
class Sauce;

class PizzaIngredientFactory {
public:
	PizzaIngredientFactory() = default;

	virtual std::shared_ptr<Dough> createDough() = 0;
	virtual std::shared_ptr<Sauce> createSauce() = 0;
};

#endif //CODE_PIZZAINGREDIENTFACTORY_H
