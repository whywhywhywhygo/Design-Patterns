#include <iostream>
#include <memory>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

using std::shared_ptr;			using std::make_shared;
int main()
{
	shared_ptr<WeatherData> weather = make_shared<WeatherData>();
	shared_ptr<Observer> current = make_shared<CurrentConditionsDisplay>();

	weather->registerObserver(current);
	weather->setMeasurements(10, 23, 54);
	weather->removeObserver(current);
	weather->setMeasurements(54, 231, 54);

	return 0;
}