//
// Created by gaojian on 18-10-14.
//

#ifndef CODE_PIZZA_H
#define CODE_PIZZA_H

#include <string>
#include <memory>
#include <iostream>

class Dough;
class Sauce;
class PizzaIngredientFactory;

class Pizza {
public:
	Pizza() = default;

	virtual void prepare() = 0;

	void bake()
	{
		std::cout << "Baking " << m_name << std::endl;
	}

	void cut()
	{
		std::cout << "Cutting " << m_name << std::endl;
	}

	void box()
	{
		std::cout << "Boxing " << m_name << std::endl;
	}

protected:
	std::string m_name;
	std::shared_ptr<Dough> m_dough;
	std::shared_ptr<Sauce> m_sauce;

	std::shared_ptr<PizzaIngredientFactory> _ingredientFactory;
};

#endif //CODE_PIZZA_H
