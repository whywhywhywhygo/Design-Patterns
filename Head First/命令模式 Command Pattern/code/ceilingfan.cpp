//
// Created by gaojian on 18-10-20.
//

#include "ceilingfan.h"
#include <iostream>

using std::cout;			using std::endl;

CeilingFan::CeilingFan()
	: m_speed{OFF}
{}

void CeilingFan::high()
{
	m_speed = HIGH;
	cout << "Ceiling fan speed set to high" << endl;
}

void CeilingFan::medium()
{
	m_speed = MEDIUM;
	cout << "Ceiling fan speed set to medium" << endl;
}

void CeilingFan::low()
{
	m_speed = LOW;
	cout << "Ceiling fan speed set to low" << endl;
}

void CeilingFan::off()
{
	m_speed = OFF;
	cout << "Ceiling fan trun off" << endl;
}

int CeilingFan::getSpeed() const
{
	return m_speed;
}