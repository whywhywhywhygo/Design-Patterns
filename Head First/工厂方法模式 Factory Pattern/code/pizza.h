//
// Created by gaojian on 18-10-12.
//

#ifndef CODE_PIZZA_H
#define CODE_PIZZA_H

#include <string>

class Pizza {
public:
	Pizza() = default;

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();

protected:
	std::string m_pizzaName;
};

#endif //CODE_PIZZA_H
