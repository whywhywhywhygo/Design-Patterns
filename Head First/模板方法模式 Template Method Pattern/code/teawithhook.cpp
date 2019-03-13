//
// Created by gaojian on 18-10-22.
//

#include "teawithhook.h"
#include <iostream>
#include <string>

using std::cout;			using std::endl;
using std::string;			using std::cin;

void TeaWithHook::brew()
{
	cout << "Steeping the tea" << endl;
}

void TeaWithHook::addCondiments()
{
	cout << "Adding lemon" << endl;
}

bool TeaWithHook::customerWantsCondiments()
{
	string answer;
	cout << "Would you like lemon with your tea (y/n)?" << endl;
	cin >> answer;
	return answer[0] == 'y';
}