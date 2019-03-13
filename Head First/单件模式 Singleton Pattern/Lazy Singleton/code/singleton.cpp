//
// Created by gaojian on 18-10-16.
//

#include "singleton.h"
#include <iostream>

using std::cout;			using std::endl;

Singleton &Singleton::getInstance()
{
	static Singleton instance = Singleton();
	return instance;
}

void Singleton::test()
{
	cout << "Singleton test" << endl;
}