//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_REDHEADDUCK_H
#define CODE_REDHEADDUCK_H

#include "quackable.h"

class Observable;

class RedheadDuck : public Quackable, public std::enable_shared_from_this<RedheadDuck> {
public:
	RedheadDuck() = default;

	void init();

	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Observable> m_observable;
};

#endif //CODE_REDHEADDUCK_H
