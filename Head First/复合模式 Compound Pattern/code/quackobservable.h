//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_QUACKOBSERVABLE_H
#define CODE_QUACKOBSERVABLE_H

#include <memory>

class Observer;

class QuackObservable {
public:
	virtual void registerObserver(std::shared_ptr<Observer> observer) = 0;
	virtual void notifyObservers() = 0;
};

#endif //CODE_QUACKOBSERVABLE_H
