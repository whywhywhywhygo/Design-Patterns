//
// Created by gaojian on 18-11-8.
//

#include "rubberduck.h"
#include "observable.h"
#include <iostream>

using std::cout;			using std::endl;
using std::make_shared;

void RubberDuck::init()
{
	m_observable = make_shared<Observable>(Observable(shared_from_this()));
}

void RubberDuck::quack()
{
	cout << "Squeak" << endl;
	notifyObservers();
}

void RubberDuck::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observable->registerObserver(observer);
}

void RubberDuck::notifyObservers()
{
	m_observable->notifyObservers();
}