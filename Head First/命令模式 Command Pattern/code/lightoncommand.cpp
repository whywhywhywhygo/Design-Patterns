//
// Created by gaojian on 18-10-17.
//

#include "lightoncommand.h"
#include "light.h"

using std::shared_ptr;

LightOnCommand::LightOnCommand(std::shared_ptr<Light> light)
	: m_light{light}
{}

void LightOnCommand::execute()
{
	m_light->on();
}

void LightOnCommand::undo()
{
	m_light->off();
}