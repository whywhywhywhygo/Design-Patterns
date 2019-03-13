//
// Created by gaojian on 18-11-8.
//

#include "gooseadapter.h"
#include "goose.h"
#include "observable.h"

using std::make_shared;

GooseAdapter::GooseAdapter(std::shared_ptr<Goose> goose)
	: m_goose{goose}
{}

void GooseAdapter::init()
{
	m_observable = make_shared<Observable>(Observable(shared_from_this()));
}

void GooseAdapter::quack()
{
	m_goose->honk();
	notifyObservers();
}

void GooseAdapter::registerObserver(std::shared_ptr<Observer> observer)
{
	m_observable->registerObserver(observer);
}

void GooseAdapter::notifyObservers()
{
	m_observable->notifyObservers();
}