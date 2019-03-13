//
// Created by gaojian on 18-10-12.
//

#include "pizza.h"
#include <iostream>

using std::cout;		using std::endl;

void Pizza::prepare()
{
	cout << "Preparing " << m_pizzaName << endl;
}

void Pizza::bake()
{
	cout << "Baking " << m_pizzaName << endl;
}

void Pizza::cut()
{
	cout << "Cutting " << m_pizzaName << endl;
}

void Pizza::box()
{
	cout << "Boxing " << m_pizzaName << endl;
}