#include <iostream>
#include <memory>
#include "nypizzastore.h"

using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<PizzaStore> store = make_shared<NYPizzaStore>(NYPizzaStore());
	store->orderPizza("cheese");

	return 0;
}