//
// Created by gaojian on 18-10-8.
//

#include "rubberduck.h"
#include <iostream>

using std::cout;			using std::endl;

RubberDuck::RubberDuck()
{}

void RubberDuck::quack()
{
	cout << "Rubber duck quack" << endl;
}

void RubberDuck::fly()
{
	cout << "Rubber duck cannot fly" << endl;
}

void RubberDuck::display()
{
	cout << "Display rubber duck" << endl;
}