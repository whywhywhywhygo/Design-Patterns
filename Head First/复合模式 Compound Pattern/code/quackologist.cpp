//
// Created by gaojian on 18-11-8.
//

#include "quackologist.h"
#include <iostream>

using std::cout;			using std::endl;

void Quackologist::update(std::shared_ptr<QuackObservable> duck)
{
	cout << "Quackologist just quacked" << endl;
}