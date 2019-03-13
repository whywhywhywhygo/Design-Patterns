//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_CHEESEPIZZA_H
#define CODE_CHEESEPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class CheesePizza : public Pizza {
public:
	CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
	{
		m_name = "Cheese Pizza";
		_ingredientFactory = ingredientFactory;
	}

	void prepare() override
	{
		m_dough = _ingredientFactory->createDough();
		m_sauce = _ingredientFactory->createSauce();
	}
};


#endif //CODE_CHEESEPIZZA_H
