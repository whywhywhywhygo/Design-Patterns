//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_CURRENTCONDITIONSDISPLAY_H
#define CODE_CURRENTCONDITIONSDISPLAY_H

#include "displayelement.h"
#include "observer.h"

class CurrentConditionsDisplay : public DisplayElement, public Observer {
public:
	CurrentConditionsDisplay();

	void update(double temperature, double humidity, double pressure) override;
	void display() override;

private:
	double m_temperature;
	double m_humidity;
	double m_pressure;
};

#endif //CODE_CURRENTCONDITIONSDISPLAY_H
