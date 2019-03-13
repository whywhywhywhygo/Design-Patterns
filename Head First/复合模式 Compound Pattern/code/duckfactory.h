//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_DUCKFACTORY_H
#define CODE_DUCKFACTORY_H

#include "abstractduckfactory.h"

class DuckFactory : public AbstractDuckFactory {
public:
	DuckFactory() = default;

	std::shared_ptr<Quackable> createMallardDuck() override;
	std::shared_ptr<Quackable> createRedheadDuck() override;
	std::shared_ptr<Quackable> createDuckCall() override;
	std::shared_ptr<Quackable> createRubberDuck() override;
	std::shared_ptr<Quackable> createGooseAdapter() override;
};

#endif //CODE_DUCKFACTORY_H
