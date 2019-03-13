//
// Created by gaojian on 18-10-26.
//

#include "waitress.h"
#include "dinermenu.h"
#include "dinermenuiterator.hpp"
#include <iostream>

using std::cout;			using std::endl;

Waitress::Waitress(Menu *menu)
	: m_menu{menu}
{}

void Waitress::printMenu()
{
	auto i = m_menu->createIterator();
	while(i->hasNext())
		cout << i->next()->getName() << endl;
}