//
// Created by gaojian on 18-10-22.
//

#include "coffeewithhook.h"
#include <iostream>
#include <string>

using std::cout;			using std::endl;
using std::cin;				using std::string;

void CoffeeWithHook::brew()
{
	cout << "Dripping coffee through filter" << endl;
}

void CoffeeWithHook::addCondiments()
{
	cout << "Adding sugar and milk" << endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
	string answer;
	cout << "Would you like lemon with your tea (y/n)?" << endl;
	cin >> answer;
	return answer[0] == 'y';
}