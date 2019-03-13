//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_HOUSEBLEND_H
#define CODE_HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage {
public:
	HouseBlend();

	double cost() const override;
};


#endif //CODE_HOUSEBLEND_H
