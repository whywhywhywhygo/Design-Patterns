//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_GOOSEADAPTER_H
#define CODE_GOOSEADAPTER_H

#include "quackable.h"
#include <memory>

class Goose;
class Observable;

class GooseAdapter : public Quackable, public std::enable_shared_from_this<GooseAdapter> {
public:
	GooseAdapter(std::shared_ptr<Goose> goose);

	void init();

	void quack() override;

	void registerObserver(std::shared_ptr<Observer> observer) override;
	void notifyObservers() override;

private:
	std::shared_ptr<Goose> m_goose;
	std::shared_ptr<Observable> m_observable;
};

#endif //CODE_GOOSEADAPTER_H
