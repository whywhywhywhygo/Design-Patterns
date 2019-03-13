//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_TEA_H
#define CODE_TEA_H

#include "caffeinebeverage.h"

class TeaWithHook : public CaffeineBeverageWithHook {
public:
	TeaWithHook() = default;

	void brew() override;
	void addCondiments() override;
	bool customerWantsCondiments() override;
};

#endif //CODE_TEA_H
