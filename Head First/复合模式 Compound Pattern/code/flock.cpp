//
// Created by gaojian on 18-11-8.
//

#include "flock.h"

void Flock::add(std::shared_ptr<Quackable> quacker)
{
	m_quackers.push_back(quacker);
}

void Flock::quack()
{
	for (auto &it : m_quackers)
		it->quack();
}

void Flock::registerObserver(std::shared_ptr<Observer> observer)
{
	for(auto &it : m_quackers)
		it->registerObserver(observer);
}

void Flock::notifyObservers()
{
	for(auto &it : m_quackers)
		it->notifyObservers();
}