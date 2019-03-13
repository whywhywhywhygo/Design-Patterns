//
// Created by gaojian on 18-10-8.
//

#ifndef DESIGN_PATTERNS_DUCK_H
#define DESIGN_PATTERNS_DUCK_H

class Duck {
public:
	Duck();

	void quack();
	void swim();
	void fly();
	virtual void display() = 0;
};

#endif //DESIGN_PATTERNS_DUCK_H
