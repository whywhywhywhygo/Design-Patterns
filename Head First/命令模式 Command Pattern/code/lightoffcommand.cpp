//
// Created by gaojian on 18-10-19.
//

#include "lightoffcommand.h"
#include "light.h"

LightOffCommand::LightOffCommand(std::shared_ptr<Light> light)
	: m_light{light}
{}

void LightOffCommand::execute()
{
	m_light->off();
}

void LightOffCommand::undo()
{
	m_light->on();
}