//
// Created by gaojian on 18-11-8.
//

#include "observable.h"
#include "observer.h"

Observable::Observable(std::shared_ptr<QuackObservable> duck)
	: m_duck{duck}
{}

void Observable::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observers.push_back(observer);
}

void Observable::notifyObservers()
{
	for (auto &it : m_observers)
		it->update(m_duck);
}