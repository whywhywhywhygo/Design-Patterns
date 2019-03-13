#include <iostream>
#include <memory>
#include "countingduckfactory.h"
#include "quackcounter.h"
#include "flock.h"

using std::shared_ptr;				using std::make_shared;
using std::cout;					using std::endl;

void simulate(shared_ptr<AbstractDuckFactory> factory);
void simulate(shared_ptr<Quackable> duck);

int main()
{
	simulate(make_shared<CountingDuckFactory>(CountingDuckFactory()));

	return 0;
}

void simulate(shared_ptr<AbstractDuckFactory> factory)
{
	shared_ptr<Quackable> redheadDuck = factory->createRedheadDuck();
	shared_ptr<Quackable> duckCall = factory->createDuckCall();
	shared_ptr<Quackable> rubberDuck = factory->createRubberDuck();
	shared_ptr<Quackable> gooseDuck = factory->createGooseAdapter();

	cout << "Duck Simulator: With Composite - Flocks" << endl;

	shared_ptr<Flock> flockOfDucks = make_shared<Flock>(Flock());
	flockOfDucks->add(redheadDuck);
	flockOfDucks->add(duckCall);
	flockOfDucks->add(rubberDuck);
	flockOfDucks->add(gooseDuck);

	shared_ptr<Quackable> mallardOne = factory->createMallardDuck();
	shared_ptr<Quackable> mallardTwo = factory->createMallardDuck();
	shared_ptr<Quackable> mallardThree = factory->createMallardDuck();
	shared_ptr<Quackable> mallardFour = factory->createMallardDuck();

	shared_ptr<Flock> flockOfMallards = make_shared<Flock>(Flock());
	flockOfMallards->add(mallardOne);
	flockOfMallards->add(mallardTwo);
	flockOfMallards->add(mallardThree);
	flockOfMallards->add(mallardFour);

	flockOfDucks->add(flockOfMallards);

	cout << "Duck Simulator: Whole Flock Simulation" << endl;
	simulate(flockOfDucks);

	cout << "Duck Simulator: Mallard Flock Simulation" << endl;
	simulate(flockOfMallards);

	cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << endl;
}

void simulate(shared_ptr<Quackable> duck)
{
	duck->quack();
}