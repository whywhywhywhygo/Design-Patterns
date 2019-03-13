//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_AMPLIFIER_H
#define CODE_AMPLIFIER_H

class Amplifier {
public:
	Amplifier() = default;

	void on();
	void off();
	void setCd();
	void setDvd();
	void setStereoSound();
	void setSurroundSound();
	void setTuner();
	void setVolume();
};

#endif //CODE_AMPLIFIER_H
