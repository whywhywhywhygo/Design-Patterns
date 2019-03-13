//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_DVDPLAYER_H
#define CODE_DVDPLAYER_H

class DVDPlayer {
public:
	DVDPlayer() = default;

	void on();
	void off();
	void eject();
	void pause();
	void play();
	void setSurroundAudio();
	void setTwoChannelAudio();
	void stop();
};


#endif //CODE_DVDPLAYER_H
