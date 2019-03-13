//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_MENUITEM_H
#define CODE_MENUITEM_H

#include <string>

class MenuItem {
public:
	MenuItem(std::string name, std::string description, bool vegetarian, double price);

	std::string getName() const;
	std::string getDescription() const;
	bool getVegetarian() const;
	double getPrice() const;

private:
	std::string m_name;
	std::string m_description;
	bool m_vegetarian;
	double m_price;
};

#endif //CODE_MENUITEM_H
