//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_MALLARDDUCK_H
#define CODE_MALLARDDUCK_H

#include "quackable.h"

class Observable;

class MallardDuck : public Quackable, public std::enable_shared_from_this<MallardDuck> {
public:
	MallardDuck() = default;

	void init();

	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Observable> m_observable;
};

#endif //CODE_MALLARDDUCK_H
