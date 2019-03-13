//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_DUCKCALL_H
#define CODE_DUCKCALL_H

#include "quackable.h"

class Observable;

class DuckCall : public Quackable, public std::enable_shared_from_this<DuckCall> {
public:
	DuckCall() = default;

	void init();

	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Observable> m_observable;
};

#endif //CODE_DUCKCALL_H
