//
// Created by gaojian on 18-11-2.
//

#ifndef CODE_STATE_H
#define CODE_STATE_H

class State {
public:
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
};


#endif //CODE_STATE_H
