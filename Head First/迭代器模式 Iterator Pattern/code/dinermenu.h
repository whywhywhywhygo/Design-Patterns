//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_PANCAKEHOUSEMENU_H
#define CODE_PANCAKEHOUSEMENU_H

#include <string>
#include "menuitem.h"
#include "menu.h"

class DinerMenu : public Menu {
public:
	DinerMenu();

	void addItem(std::string name, std::string description, bool vegetarian, double price);
	Iterator<MenuItem> *createIterator() override;

private:
	static constexpr int M_MAX_ITMES = 6;
	size_t numberOfItems;
	MenuItem *m_menu[M_MAX_ITMES];
};

#endif //CODE_PANCAKEHOUSEMENU_H
