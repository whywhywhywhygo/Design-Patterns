//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_OBSERVER_H
#define CODE_OBSERVER_H

#include <memory>

class QuackObservable;

class Observer {
public:
	virtual void update(std::shared_ptr<QuackObservable> duck) = 0;
};

#endif //CODE_OBSERVER_H
