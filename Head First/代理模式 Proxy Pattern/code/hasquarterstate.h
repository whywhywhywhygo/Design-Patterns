//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_HASQUARTERSTATE_H
#define CODE_HASQUARTERSTATE_H

#include "state.h"
#include <memory>

class GumballMachine;

class HasQuarterState : public State {
public:
	HasQuarterState(std::weak_ptr<GumballMachine> machine);

	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;

private:
	std::weak_ptr<GumballMachine> m_machine;
};


#endif //CODE_HASQUARTERSTATE_H
