//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_COFFEE_H
#define CODE_COFFEE_H

#include "caffeinebeverage.h"

class CoffeeWithHook : public CaffeineBeverageWithHook {
public:
	CoffeeWithHook() = default;

	void brew() override;
	void addCondiments() override;
	bool customerWantsCondiments() override;
};


#endif //CODE_COFFEE_H
