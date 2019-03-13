//
// Created by gaojian on 18-10-11.
//

#include "mocha.h"

using std::weak_ptr;

Mocha::Mocha(std::shared_ptr<Beverage> beverage)
{
	m_beverage = beverage;
}

std::string Mocha::getDescription() const
{
	return m_beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const
{
	return 0.2 + m_beverage->cost();
}