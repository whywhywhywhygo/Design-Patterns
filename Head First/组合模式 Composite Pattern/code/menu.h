//
// Created by gaojian on 18-10-27.
//

#ifndef CODE_MENU_H
#define CODE_MENU_H

#include "menucomponent.h"
#include <string>
#include <list>
#include <memory>

class Menu : public MenuComponent {
public:
	Menu(std::string name, std::string description);

	std::string getName() const override;
	std::string getDescription() const override;

	void print() override;
	void add(std::shared_ptr<MenuComponent> component) override;
	void remove(std::shared_ptr<MenuComponent> component) override;
	std::shared_ptr<MenuComponent> getChild(int index) override;

private:
	std::string m_name;
	std::string m_description;
	std::list<std::shared_ptr<MenuComponent>> m_menuComponents;
};

#endif //CODE_MENU_H
