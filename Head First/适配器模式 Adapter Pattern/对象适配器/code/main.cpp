#include <iostream>
#include <memory>
#include "mallardduck.h"
#include "turkeyadapter.h"
#include "wildturkey.h"

using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<Duck> duck = make_shared<MallardDuck>(MallardDuck());
	shared_ptr<Turkey> turkey = make_shared<WildTurkey>(WildTurkey());
	shared_ptr<Duck> adapter = make_shared<TurkeyAdapter>(TurkeyAdapter(turkey));

	duck->quack();
	duck->fly();
	adapter->quack();
	adapter->fly();

	return 0;
}