//
// Created by gaojian on 18-10-22.
//

#include "dvdplayer.h"
#include <iostream>

using std::cout;			using std::endl;

void DVDPlayer::on()
{
	cout << "DVD player on" << endl;
}

void DVDPlayer::off()
{
	cout << "DVD player off" << endl;
}

void DVDPlayer::eject()
{
	cout << "DVD player eject" << endl;
}

void DVDPlayer::pause()
{
	cout << "DVD player pause" << endl;
}

void DVDPlayer::play()
{
	cout << "DVD player play" << endl;
}

void DVDPlayer::setSurroundAudio()
{
	cout << "DVD player set surround audio" << endl;
}

void DVDPlayer::setTwoChannelAudio()
{
	cout << "DVD player set two channel audio" << endl;
}

void DVDPlayer::stop()
{
	cout << "DVD player stop" << endl;
}