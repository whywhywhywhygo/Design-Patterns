//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_QUACKCOUNTER_H
#define CODE_QUACKCOUNTER_H

#include "quackable.h"
#include <memory>

class QuackCounter : public Quackable {
public:
	QuackCounter(std::shared_ptr<Quackable> duck);

	void quack() override;
	static int getQuacks();

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Quackable> m_duck;
	static int numberOfQuacks;
};

#endif //CODE_QUACKCOUNTER_H
