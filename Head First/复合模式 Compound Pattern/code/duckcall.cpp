//
// Created by gaojian on 18-11-8.
//

#include "duckcall.h"
#include "observable.h"
#include <iostream>

using std::cout;				using std::endl;
using std::make_shared;

void DuckCall::init()
{
	m_observable = make_shared<Observable>(Observable(shared_from_this()));
}

void DuckCall::quack()
{
	cout << "Kwak" << endl;
	notifyObservers();
}

void DuckCall::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observable->registerObserver(observer);
}

void DuckCall::notifyObservers()
{
	m_observable->notifyObservers();
}