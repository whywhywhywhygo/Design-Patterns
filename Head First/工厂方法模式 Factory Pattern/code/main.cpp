#include <iostream>
#include <memory>
#include "nystylepizzastore.h"

using std::shared_ptr;			using std::make_shared;

int main()
{
	shared_ptr<PizzaStore> store = make_shared<NYStylePizzaStore>(NYStylePizzaStore());

	store->orderPizza("cheese");

	return 0;
}