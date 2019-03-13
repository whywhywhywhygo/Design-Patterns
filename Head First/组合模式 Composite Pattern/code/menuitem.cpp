//
// Created by gaojian on 18-10-27.
//

#include "menuitem.h"
#include <iostream>

using std::cout;			using std::endl;

MenuItem::MenuItem(std::string name, std::string descriptioin, double price, bool vegetarian)
	: m_name{name}, m_description{descriptioin}, m_price{price}, m_vegetarian{vegetarian}
{}

std::string MenuItem::getName() const
{
	return m_name;
}

std::string MenuItem::getDescription() const
{
	return m_description;
}

double MenuItem::getPrice() const
{
	return m_price;
}

bool MenuItem::isVegetarian() const
{
	return m_vegetarian;
}

void MenuItem::print()
{
	cout << getName();
	if (isVegetarian())
		cout << "(v)";
	cout << ", " << getPrice() << "   -- " << getDescription() << endl;
}