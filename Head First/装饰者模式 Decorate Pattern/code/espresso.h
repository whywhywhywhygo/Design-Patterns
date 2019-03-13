//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_ESPRESSO_H
#define CODE_ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage {
public:
	Espresso();

	double cost() const override;
};


#endif //CODE_ESPRESSO_H
