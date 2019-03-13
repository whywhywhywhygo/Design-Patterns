//
// Created by gaojian on 18-10-27.
//

#include "menu.h"
#include <iostream>
#include <algorithm>

using std::cout;		using std::endl;

Menu::Menu(std::string name, std::string description)
	: m_name{name}, m_description{description}
{}

std::string Menu::getName() const
{
	return m_name;
}

std::string Menu::getDescription() const
{
	return m_description;
}

void Menu::print()
{
	cout << getName() << ", " << getDescription() << "----------" << endl;
	for (auto &component : m_menuComponents)
		component->print();
	cout << endl;
}

void Menu::add(std::shared_ptr<MenuComponent> component)
{
	m_menuComponents.push_back(component);
}

void Menu::remove(std::shared_ptr<MenuComponent> component)
{
	auto it = std::find(m_menuComponents.begin(), m_menuComponents.end(), component);
	m_menuComponents.erase(it);
}

std::shared_ptr<MenuComponent> Menu::getChild(int index)
{
	std::list<std::shared_ptr<MenuComponent>>::iterator it = m_menuComponents.begin();
	for(int i = 0; i != m_menuComponents.size() && i != index; ++i)
		++it;
	return (*it);
}