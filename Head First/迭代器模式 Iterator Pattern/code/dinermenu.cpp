//
// Created by gaojian on 18-10-26.
//

#include "dinermenu.h"
#include "dinermenuiterator.hpp"

DinerMenu::DinerMenu()
	: numberOfItems{0}
{
	addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.99);
	addItem("Hotdog", "A hot dog, with saurkraut, relist, onions, topped with cheese", false, 3.05);
}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price)
{
	m_menu[numberOfItems] = new MenuItem(name, description, vegetarian, price);
	++numberOfItems;
}

Iterator<MenuItem> *DinerMenu::createIterator()
{
	return new DinerMenuIterator<MenuItem>(m_menu, numberOfItems);
}