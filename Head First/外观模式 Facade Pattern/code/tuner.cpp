//
// Created by gaojian on 18-10-22.
//

#include "tuner.h"
#include <iostream>

using std::cout;			using std::endl;

void Tuner::on()
{
	cout << "Tuner on" << endl;
}

void Tuner::off()
{
	cout << "Tuner off" << endl;
}

void Tuner::setAm()
{
	cout << "Tuner set am" << endl;
}

void Tuner::setFm()
{
	cout << "Tuner set fm" << endl;
}

void Tuner::setFrequency()
{
	cout << "Tuner set frequency" << endl;
}