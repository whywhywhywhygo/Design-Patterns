#include <iostream>
#include "mallarduck.h"
#include "rubberduck.h"
#include "modelduck.h"
#include "flywithwings.h"
#include <memory>

using std::shared_ptr;		using std::make_shared;

int main()
{
	shared_ptr<Duck> mallard = make_shared<MallardDuck>();
	shared_ptr<Duck> rubber = make_shared<RubberDuck>();
	shared_ptr<Duck> model = make_shared<ModelDuck>();

	mallard->display();
	mallard->swim();
	mallard->performFly();
	mallard->performQuack();

	rubber->display();
	rubber->swim();
	rubber->performFly();
	rubber->performQuack();

	model->display();
	model->swim();
	model->performFly();
	model->performQuack();
	model->setFlyBehavior(make_shared<FlyWithWings>());
	model->performFly();

	return 0;
}