//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_MOCHA_H
#define CODE_MOCHA_H

#include "condimentdecorator.h"

class Mocha : public CondimentDecorator {
public:
	Mocha(std::shared_ptr<Beverage> beverage);

	std::string getDescription() const override;
	double cost() const override;
};

#endif //CODE_MOCHA_H
