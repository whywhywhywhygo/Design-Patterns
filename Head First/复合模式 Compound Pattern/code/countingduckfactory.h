//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_COUNTINGDUCKFACTORY_H
#define CODE_COUNTINGDUCKFACTORY_H

#include "abstractduckfactory.h"

class Quackable;

class CountingDuckFactory : public AbstractDuckFactory {
public:
	CountingDuckFactory() = default;

	std::shared_ptr<Quackable> createMallardDuck() override;
	std::shared_ptr<Quackable> createRedheadDuck() override;
	std::shared_ptr<Quackable> createDuckCall() override;
	std::shared_ptr<Quackable> createRubberDuck() override;
	std::shared_ptr<Quackable> createGooseAdapter() override;
};

#endif //CODE_COUNTINGDUCKFACTORY_H
