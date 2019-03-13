//
// Created by gaojian on 18-10-27.
//

#ifndef CODE_MENUCOMPONENT_H
#define CODE_MENUCOMPONENT_H

#include <string>
#include <memory>

class MenuComponent {
public:
	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual double getPrice() const;
	virtual bool isVegetarian() const;

	virtual void print();
	virtual void add(std::shared_ptr<MenuComponent> component);
	virtual void remove(std::shared_ptr<MenuComponent> component);
	virtual std::shared_ptr<MenuComponent> getChild(int index);
};

#endif //CODE_MENUCOMPONENT_H
