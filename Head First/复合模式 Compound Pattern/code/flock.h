//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_FLOCK_H
#define CODE_FLOCK_H

#include "quackable.h"
#include <memory>
#include <vector>

class Flock : public Quackable {
public:
	Flock() = default;

	void add(std::shared_ptr<Quackable> quacker);
	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::vector<std::shared_ptr<Quackable>> m_quackers;
};

#endif //CODE_FLOCK_H
