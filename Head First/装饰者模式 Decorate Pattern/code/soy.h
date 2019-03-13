//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_SOY_H
#define CODE_SOY_H

#include "condimentdecorator.h"
#include <memory>

class Soy : public CondimentDecorator {
public:
	Soy(std::shared_ptr<Beverage> beverage);

	std::string getDescription() const override;
	double cost() const override;
};


#endif //CODE_SOY_H
