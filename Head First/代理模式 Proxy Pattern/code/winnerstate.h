//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_WINNERSTATE_H
#define CODE_WINNERSTATE_H

#include "state.h"
#include <memory>

class GumballMachine;

class WinnerState : public State {
public:
	WinnerState(std::weak_ptr<GumballMachine> machine);

	void insertQuarter() override;
	void ejectQuarter() override;
	void turnCrank() override;
	void dispense() override;

private:
	std::weak_ptr<GumballMachine> m_machine;
};


#endif //CODE_WINNERSTATE_H
