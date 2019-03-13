//
// Created by gaojian on 18-10-27.
//

#ifndef CODE_WAITRESS_H
#define CODE_WAITRESS_H

#include <memory>

class MenuComponent;

class Waitress {
public:
	Waitress(std::shared_ptr<MenuComponent> menu);
	void printMenu();

private:
	std::shared_ptr<MenuComponent> m_menu;
};


#endif //CODE_WAITRESS_H
