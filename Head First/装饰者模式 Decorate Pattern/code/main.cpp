#include <iostream>
#include <memory>
#include "espresso.h"
#include "houseblend.h"
#include "mocha.h"
#include "soy.h"

using std::shared_ptr;			using std::make_shared;
using std::cout;				using std::endl;

int main()
{
	shared_ptr<Beverage> beverage = make_shared<Espresso>(Espresso());

	beverage = make_shared<Mocha>(Mocha(beverage));
	beverage = make_shared<Mocha>(Mocha(beverage));
	beverage = make_shared<Soy>(Soy(beverage));

	cout << beverage->getDescription() << endl;

	return 0;
}