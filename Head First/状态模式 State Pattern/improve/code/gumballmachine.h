//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_GUMBALLMACHINE_H
#define CODE_GUMBALLMACHINE_H

#include <memory>

class State;

class GumballMachine : public std::enable_shared_from_this<GumballMachine> {
public:
	GumballMachine(int numberGumballs);

	void init();

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void setState(std::shared_ptr<State> state);
	void releaseBall();

	std::shared_ptr<State> getSoldOutState() const;
	std::shared_ptr<State> getNoQuarterState() const;
	std::shared_ptr<State> getHasQuarterState() const;
	std::shared_ptr<State> getSoldState() const;
	std::shared_ptr<State> getWinnerState() const;
	int getCount() const;

private:
	std::shared_ptr<State> m_soldOutState;
	std::shared_ptr<State> m_noQuarterState;
	std::shared_ptr<State> m_hasQuarterState;
	std::shared_ptr<State> m_soldState;
	std::shared_ptr<State> m_winnerState;

	std::shared_ptr<State> m_state;
	int m_count;
};


#endif //CODE_GUMBALLMACHINE_H
