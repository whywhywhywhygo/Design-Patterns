//
// Created by gaojian on 18-10-27.
//

#include "waitress.h"
#include "menucomponent.h"

Waitress::Waitress(std::shared_ptr<MenuComponent> menu)
	: m_menu{menu}
{}

void Waitress::printMenu()
{
	m_menu->print();
}