//
// Created by gaojian on 18-11-8.
//

#include "duckfactory.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "duckcall.h"
#include "rubberduck.h"
#include "gooseadapter.h"
#include "goose.h"
#include <memory>

using std::make_shared;

std::shared_ptr<Quackable> DuckFactory::createMallardDuck()
{
	auto duck = make_shared<MallardDuck>(MallardDuck());
	duck->init();
	return duck;
}

std::shared_ptr<Quackable> DuckFactory::createRedheadDuck()
{
	auto duck = make_shared<RedheadDuck>(RedheadDuck());
	duck->init();
	return duck;
}

std::shared_ptr<Quackable> DuckFactory::createDuckCall()
{
	auto duck = make_shared<DuckCall>(DuckCall());
	duck->init();
	return duck;
}

std::shared_ptr<Quackable> DuckFactory::createRubberDuck()
{
	auto duck = make_shared<RubberDuck>(RubberDuck());
	duck->init();
	return duck;
}

std::shared_ptr<Quackable> DuckFactory::createGooseAdapter()
{
	auto duck = make_shared<GooseAdapter>(GooseAdapter(make_shared<Goose>(Goose())));
	duck->init();
	return duck;
}