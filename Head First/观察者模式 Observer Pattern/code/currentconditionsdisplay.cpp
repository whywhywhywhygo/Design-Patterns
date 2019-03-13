//
// Created by gaojian on 18-10-11.
//

#include "currentconditionsdisplay.h"
#include <iostream>

using std::cout;			using std::endl;

CurrentConditionsDisplay::CurrentConditionsDisplay()
{}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure)
{
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;
	display();
}

void CurrentConditionsDisplay::display()
{
	cout << "Current conditions: "
		<< "temperature: " << m_temperature
		<< " humidity: " << m_humidity
		<< " pressure: " << m_pressure << endl;
}