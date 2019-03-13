//
// Created by gaojian on 18-10-16.
//

#include "singleton.h"
#include <iostream>

using std::cout;			using std::endl;

Singleton Singleton::m_instance;

Singleton &Singleton::getInstance()
{
	return m_instance;
}

void Singleton::test()
{
	cout << "Singleton test" << endl;
}