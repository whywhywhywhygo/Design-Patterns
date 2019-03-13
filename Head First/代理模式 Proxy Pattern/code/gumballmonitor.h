//
// Created by gaojian on 18-11-6.
//

#ifndef CODE_GUMBALLMONITOR_H
#define CODE_GUMBALLMONITOR_H

#include <memory>

class GumballMachine;

class GumballMonitor {
public:
	GumballMonitor(std::weak_ptr<GumballMachine> machine);

	void report();

private:
	std::weak_ptr<GumballMachine> m_machine;
};


#endif //CODE_GUMBALLMONITOR_H
