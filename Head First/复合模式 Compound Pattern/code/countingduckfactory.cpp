//
// Created by gaojian on 18-11-8.
//

#include "countingduckfactory.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "duckcall.h"
#include "rubberduck.h"
#include "quackcounter.h"
#include "goose.h"
#include "gooseadapter.h"
#include <memory>

using std::make_shared;

std::shared_ptr<Quackable> CountingDuckFactory::createMallardDuck()
{
	auto duck = make_shared<MallardDuck>(MallardDuck());
	duck->init();
	return make_shared<QuackCounter>(duck);
}

std::shared_ptr<Quackable> CountingDuckFactory::createRedheadDuck()
{
	auto duck = make_shared<RedheadDuck>(RedheadDuck());
	duck->init();
	return make_shared<QuackCounter>(duck);
}

std::shared_ptr<Quackable> CountingDuckFactory::createDuckCall()
{
	auto duck = make_shared<DuckCall>(DuckCall());
	duck->init();
	return make_shared<QuackCounter>(duck);
}

std::shared_ptr<Quackable> CountingDuckFactory::createRubberDuck()
{
	auto duck = make_shared<RubberDuck>(RubberDuck());
	duck->init();
	return make_shared<QuackCounter>(duck);
}

std::shared_ptr<Quackable> CountingDuckFactory::createGooseAdapter()
{
	auto duck = make_shared<GooseAdapter>(GooseAdapter(make_shared<Goose>(Goose())));
	duck->init();
	return make_shared<QuackCounter>(duck);
}