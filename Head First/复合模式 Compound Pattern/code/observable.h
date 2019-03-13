//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_OBSERVABLE_H
#define CODE_OBSERVABLE_H

#include "quackobservable.h"
#include <memory>
#include <vector>

class Observer;

class Observable : public QuackObservable {
public:
	Observable(std::shared_ptr<QuackObservable> duck);

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<QuackObservable> m_duck;
	std::vector<std::shared_ptr<Observer>> m_observers;
};


#endif //CODE_OBSERVABLE_H
