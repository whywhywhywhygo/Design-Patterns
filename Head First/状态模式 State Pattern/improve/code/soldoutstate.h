//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_SOLDOUTSTATE_H
#define CODE_SOLDOUTSTATE_H

#include "state.h"
#include <memory>

class GumballMachine;

class SoldOutState : public State {
public:
	SoldOutState(std::weak_ptr<GumballMachine> machine);

	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;

private:
	std::weak_ptr<GumballMachine> m_machine;
};

#endif //CODE_SOLDOUTSTATE_H
