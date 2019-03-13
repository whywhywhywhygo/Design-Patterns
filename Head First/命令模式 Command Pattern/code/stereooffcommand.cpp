//
// Created by gaojian on 18-10-19.
//

#include "stereooffcommand.h"
#include "stereo.h"

StereoOffCommand::StereoOffCommand(std::shared_ptr<Stereo> stereo)
	: m_stereo{stereo}
{}

void StereoOffCommand::execute()
{
	m_stereo->off();
}

void StereoOffCommand::undo()
{
	m_stereo->on();
}