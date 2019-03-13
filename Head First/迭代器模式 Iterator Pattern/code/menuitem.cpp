//
// Created by gaojian on 18-10-26.
//

#include "menuitem.h"

MenuItem::MenuItem(std::string name, std::string description, bool vegetarian, double price)
	: m_name{name}, m_description{description}, m_vegetarian{vegetarian}, m_price{price}
{}

std::string MenuItem::getName() const
{
	return m_name;
}

std::string MenuItem::getDescription() const
{
	return m_description;
}

bool MenuItem::getVegetarian() const
{
	return m_vegetarian;
}

double MenuItem::getPrice() const
{
	return m_price;
}