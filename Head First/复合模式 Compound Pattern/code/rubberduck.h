//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_RUBBERDUCK_H
#define CODE_RUBBERDUCK_H

#include "quackable.h"

class Observable;

class RubberDuck : public Quackable, public std::enable_shared_from_this<RubberDuck> {
public:
	RubberDuck() = default;

	void init();

	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Observable> m_observable;
};

#endif //CODE_RUBBERDUCK_H
