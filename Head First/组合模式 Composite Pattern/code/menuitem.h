//
// Created by gaojian on 18-10-27.
//

#ifndef CODE_MENUITEM_H
#define CODE_MENUITEM_H

#include "menucomponent.h"
#include <string>

class MenuItem : public MenuComponent {
public:
	MenuItem(std::string name, std::string descriptioin, double price, bool vegetarian);

	std::string getName() const override;
	std::string getDescription() const override;
	double getPrice() const override;
	bool isVegetarian() const override;

	void print() override;

private:
	std::string m_name;
	std::string m_description;
	double m_price;
	bool m_vegetarian;
};

#endif //CODE_MENUITEM_H
