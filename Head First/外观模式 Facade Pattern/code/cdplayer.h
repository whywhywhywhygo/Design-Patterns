//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_CDPLAYER_H
#define CODE_CDPLAYER_H

class CDPlayer {
public:
	CDPlayer() = default;

	void on();
	void off();
	void eject();
	void pause();
	void play();
	void stop();
};

#endif //CODE_CDPLAYER_H
