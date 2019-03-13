#include <iostream>
#include <memory>
#include "waitress.h"
#include "menuitem.h"
#include "menu.h"

using std::shared_ptr;				using std::make_shared;

int main()
{
	shared_ptr<MenuComponent> pancakeHouseMenu = make_shared<Menu>("PANCAKEK HOUSE MENU", "Breakfase");
	shared_ptr<MenuComponent> dinerMenu = make_shared<Menu>("DINER MENU", "Lunch");
	shared_ptr<MenuComponent> cafeMenu = make_shared<Menu>("CAFE MENU", "Dinner");
	shared_ptr<MenuComponent> dessertMenu = make_shared<Menu>("DESSERT MENU", "Dessert of course!");

	shared_ptr<MenuComponent> all = make_shared<Menu>("ALL MENUS", "All menus combined");

	all->add(pancakeHouseMenu);
	all->add(dinerMenu);
	all->add(cafeMenu);

	dinerMenu->add(make_shared<MenuItem>("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true,
										 3.89));
	dinerMenu->add(dessertMenu);
	dessertMenu->add(
			make_shared<MenuItem>("Apple Pie", "Apple with a flakey crust, topped with vanilla ice cream", true, 1.59));

	shared_ptr<Waitress> waitress = make_shared<Waitress>(all);
	waitress->printMenu();

	return 0;
}