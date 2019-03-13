//
// Created by gaojian on 18-10-11.
//

#ifndef CODE_BEVERAGE_H
#define CODE_BEVERAGE_H

#include <string>

class Beverage {
public:
	Beverage() : m_description{"Unknown Beverage"} {}

	virtual std::string getDescription() const { return m_description; }
	virtual double cost() const = 0 ;

protected:
	std::string m_description;
};


#endif //CODE_BEVERAGE_H
