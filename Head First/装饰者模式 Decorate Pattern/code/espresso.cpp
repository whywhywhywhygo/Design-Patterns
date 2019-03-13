//
// Created by gaojian on 18-10-11.
//

#include "espresso.h"

Espresso::Espresso()
{
	m_description = "House Blend Coffee";
}

double Espresso::cost() const
{
	return 1.99;
}