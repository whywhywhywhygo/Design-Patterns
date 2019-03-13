//
// Created by gaojian on 18-10-11.
//

#include "weatherdata.h"
#include "observer.h"
#include <iostream>
#include <algorithm>

using std::vector;			using std::weak_ptr;
using std::find;

WeatherData::WeatherData()
	: m_temperature{0}, m_humidity{0}, m_pressure{0}
{}

void WeatherData::registerObserver(std::weak_ptr<Observer> ob)
{
	m_observers.push_back(ob);
}

void WeatherData::removeObserver(std::weak_ptr<Observer> ob)
{
	for(vector<weak_ptr<Observer>>::iterator it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (it->lock() == ob.lock())
			m_observers.erase(it);
	}
}

void WeatherData::notifyObservers()
{
	for (weak_ptr<Observer> ob : m_observers)
		ob.lock()->update(m_temperature, m_humidity, m_pressure);
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::setMeasurements(double temperature, double humidity, double pressure)
{
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;
	measurementsChanged();
}