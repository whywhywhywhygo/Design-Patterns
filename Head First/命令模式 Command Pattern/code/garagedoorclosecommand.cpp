//
// Created by gaojian on 18-10-19.
//

#include "garagedoorclosecommand.h"
#include "garagedoor.h"

GarageDoorCloseCommand::GarageDoorCloseCommand(std::shared_ptr<GarageDoor> garageDoor)
	: m_garageDoor{garageDoor}
{}

void GarageDoorCloseCommand::execute()
{
	m_garageDoor->down();
}

void GarageDoorCloseCommand::undo()
{
	m_garageDoor->up();
}