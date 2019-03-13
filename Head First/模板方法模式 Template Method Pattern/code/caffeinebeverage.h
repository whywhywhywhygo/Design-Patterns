//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_CAFFEINEBEVERAGE_H
#define CODE_CAFFEINEBEVERAGE_H

class CaffeineBeverageWithHook {
public:
	virtual void prepareRecipe() final;
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	void boilWater();
	void pourInCup();
	virtual bool customerWantsCondiments();
};


#endif //CODE_CAFFEINEBEVERAGE_H
