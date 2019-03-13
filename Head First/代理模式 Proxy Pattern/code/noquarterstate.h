//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_NOQUARTERSTATE_H
#define CODE_NOQUARTERSTATE_H

#include "state.h"
#include <memory>

class GumballMachine;

class NoQuarterState : public State {
public:
	NoQuarterState(std::weak_ptr<GumballMachine> machine);

	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;

private:
	std::weak_ptr<GumballMachine> m_machine;
};

#endif //CODE_NOQUARTERSTATE_H
