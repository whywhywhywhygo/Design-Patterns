//
// Created by gaojian on 18-10-11.
//

#include "soy.h"

using std::weak_ptr;

Soy::Soy(std::shared_ptr<Beverage> beverage)
{
	m_beverage = beverage;
}

std::string Soy::getDescription() const
{
	return m_beverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
	return 1.9 + m_beverage->cost();
}