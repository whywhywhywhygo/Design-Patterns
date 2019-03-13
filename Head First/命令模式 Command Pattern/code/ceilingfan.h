//
// Created by gaojian on 18-10-20.
//

#ifndef CODE_CEILINGFAN_H
#define CODE_CEILINGFAN_H

class CeilingFan {
public:
	CeilingFan();

	const int HIGH = 3;
	const int MEDIUM = 2;
	const int LOW = 1;
	const int OFF = 0;

	void high();
	void medium();
	void low();
	void off();
	int getSpeed() const;

private:
	int m_speed;
};


#endif //CODE_CEILINGFAN_H
