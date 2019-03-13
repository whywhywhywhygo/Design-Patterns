//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_NYPIZZAINGREDIENTFACTORY_H
#define CODE_NYPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"
#include "thickcrustdough.h"
#include "plumtomatosauce.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
	NYPizzaIngredientFactory() = default;

	std::shared_ptr<Dough> createDough() override
	{
		return std::make_shared<ThickCrustDough>(ThickCrustDough());
	}

	std::shared_ptr<Sauce> createSauce() override
	{
		return std::make_shared<PlumTomatoSauce>(PlumTomatoSauce());
	}
};

#endif //CODE_NYPIZZAINGREDIENTFACTORY_H
