//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_MENU_H
#define CODE_MENU_H

#include "menuitem.h"

template<class Item>
class Iterator;

class Menu {
public:
	virtual Iterator<MenuItem> *createIterator() = 0;
};


#endif //CODE_MENU_H
