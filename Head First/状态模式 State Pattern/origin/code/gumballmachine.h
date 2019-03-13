//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_GUMBALLMACHINE_H
#define CODE_GUMBALLMACHINE_H

class GumballMachine {
public:
	GumballMachine(int count);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();

private:
	const int SOLD_OUT = 0;
	const int NO_QUARTER = 1;
	const int HAS_QUARTER = 2;
	const int SOLD = 3;

	int m_state = SOLD_OUT;
	int m_count = 0;
};

#endif //CODE_GUMBALLMACHINE_H
