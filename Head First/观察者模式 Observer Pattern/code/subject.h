//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_SUBJECT_H
#define CODE_SUBJECT_H

#include <memory>
#include <vector>

class Observer;

class Subject {
public:
	virtual void registerObserver(std::weak_ptr<Observer> ob) = 0;
	virtual void removeObserver(std::weak_ptr<Observer> ob) = 0;

protected:
	virtual void notifyObservers() = 0;

	std::vector<std::weak_ptr<Observer>> m_observers;
};

#endif //CODE_SUBJECT_H
