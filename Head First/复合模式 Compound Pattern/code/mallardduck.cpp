//
// Created by gaojian on 18-11-8.
//

#include "mallardduck.h"
#include "observable.h"
#include <iostream>

using std::cout;			using std::endl;
using std::make_shared;

void MallardDuck::init()
{
	m_observable = make_shared<Observable>(Observable(shared_from_this()));
}

void MallardDuck::quack()
{
	cout << "Quack" << endl;
	notifyObservers();
}

void MallardDuck::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observable->registerObserver(observer);
}

void MallardDuck::notifyObservers()
{
	m_observable->notifyObservers();
}