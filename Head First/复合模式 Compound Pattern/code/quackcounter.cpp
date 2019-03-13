//
// Created by gaojian on 18-11-8.
//

#include "quackcounter.h"

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(std::shared_ptr<Quackable> duck)
	: m_duck{duck}
{}

void QuackCounter::quack()
{
	m_duck->quack();
	++numberOfQuacks;
}

int QuackCounter::getQuacks()
{
	return numberOfQuacks;
}

void QuackCounter::registerObserver(std::shared_ptr<Observer> observer)
{
	m_duck->registerObserver(observer);
}

void QuackCounter::notifyObservers()
{
	m_duck->notifyObservers();
}