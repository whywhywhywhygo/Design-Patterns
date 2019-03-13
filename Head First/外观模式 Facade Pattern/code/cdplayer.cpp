//
// Created by gaojian on 18-10-22.
//

#include "cdplayer.h"
#include <iostream>

using std::cout;			using std::endl;

void CDPlayer::on()
{
	cout << "CD player on" << endl;
}

void CDPlayer::off()
{
	cout << "CD player off" << endl;
}

void CDPlayer::eject()
{
	cout << "CD player eject" << endl;
}

void CDPlayer::pause()
{
	cout << "CD player pause" << endl;
}

void CDPlayer::play()
{
	cout << "CD player play" << endl;
}

void CDPlayer::stop()
{
	cout << "CD player stop" << endl;
}