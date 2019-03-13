//
// Created by gaojian on 18-10-22.
//

#include "caffeinebeverage.h"
#include <iostream>

using std::cout;			using std::endl;

void CaffeineBeverageWithHook::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	if(customerWantsCondiments())
		addCondiments();
}

void CaffeineBeverageWithHook::boilWater()
{
	cout << "Boiling water" << endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
	cout << "Pouring into cup" << endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments()
{
	return true;
}