//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_WAITRESS_H
#define CODE_WAITRESS_H

#include "menuitem.h"

class Menu;

template<class Item>
class Iterator;

class Waitress {
public:
	Waitress(Menu *menu);

	void printMenu();

private:
	Menu *m_menu;
};

#endif //CODE_WAITRESS_H
