//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_WEATHERDATA_H
#define CODE_WEATHERDATA_H

#include "subject.h"

class WeatherData : public Subject {
public:
	WeatherData();

	void registerObserver(std::weak_ptr<Observer> ob) override;
	void removeObserver(std::weak_ptr<Observer> ob) override;

	void setMeasurements(double temperature, double humidity, double pressure);

private:
	void measurementsChanged();
	void notifyObservers() override;

	double m_temperature;
	double m_humidity;
	double m_pressure;
};

#endif //CODE_WEATHERDATA_H
