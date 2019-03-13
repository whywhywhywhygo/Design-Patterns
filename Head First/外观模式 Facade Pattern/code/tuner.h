//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_TUNER_H
#define CODE_TUNER_H

class Tuner {
public:
	Tuner() = default;

	void on();
	void off();
	void setAm();
	void setFm();
	void setFrequency();
};

#endif //CODE_TUNER_H
