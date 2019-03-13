//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_OBSERVER_H
#define CODE_OBSERVER_H

#include <memory>

class Subject;

class Observer {
public:
	virtual void update(double temperature, double humidity, double pressure) = 0;
};

#endif //CODE_OBSERVER_H
