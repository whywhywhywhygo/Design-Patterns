//
// Created by gaojian on 18-10-17.
//

#include "garagedooropencommand.h"
#include "garagedoor.h"

using std::shared_ptr;

GarageDoorOpenCommand::GarageDoorOpenCommand(std::shared_ptr<GarageDoor> garageDoor)
	: m_garageDoor{garageDoor}
{}

void GarageDoorOpenCommand::execute()
{
	m_garageDoor->up();
}

void GarageDoorOpenCommand::undo()
{
	m_garageDoor->down();
}