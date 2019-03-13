//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_CONDIMENTDECORATOR_H
#define CODE_CONDIMENTDECORATOR_H

#include "beverage.h"
#include <memory>

class CondimentDecorator : public Beverage {
public:
	std::string getDescription() const override = 0;

protected:
	std::shared_ptr<Beverage> m_beverage;
};


#endif //CODE_CONDIMENTDECORATOR_H
