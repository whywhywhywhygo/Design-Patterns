//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_ABSTRACTDUCKFACTORY_H
#define CODE_ABSTRACTDUCKFACTORY_H

#include <memory>

class Quackable;

class AbstractDuckFactory {
public:
	virtual std::shared_ptr<Quackable> createMallardDuck() = 0;
	virtual std::shared_ptr<Quackable> createRedheadDuck() = 0;
	virtual std::shared_ptr<Quackable> createDuckCall() = 0;
	virtual std::shared_ptr<Quackable> createRubberDuck() = 0;
	virtual std::shared_ptr<Quackable> createGooseAdapter() = 0;
};

#endif //CODE_ABSTRACTDUCKFACTORY_H
