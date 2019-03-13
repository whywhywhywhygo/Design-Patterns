//
// Created by gaojian on 18-10-19.
//

#include "stereoonwithcdcommand.h"
#include "stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(std::shared_ptr<Stereo> stereo)
	: m_stereo{stereo}
{}

void StereoOnWithCDCommand::execute()
{
	m_stereo->on();
	m_stereo->setCd();
	m_stereo->setVolume();
}

void StereoOnWithCDCommand::undo()
{
	m_stereo->off();
}