//
// Created by gaojian on 18-11-8.
//

#include "redheadduck.h"
#include "observable.h"
#include <iostream>

using std::cout;				using std::endl;
using std::make_shared;

void RedheadDuck::init()
{
	m_observable = make_shared<Observable>(Observable(shared_from_this()));
}

void RedheadDuck::quack()
{
	cout << "Quack" << endl;
	notifyObservers();
}

void RedheadDuck::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observable->registerObserver(observer);
}

void RedheadDuck::notifyObservers()
{
	m_observable->notifyObservers();
}