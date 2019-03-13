//
// Created by gaojian on 18-10-20.
//

#include "macrocommand.h"

MacroCommand::MacroCommand(std::vector<std::shared_ptr<Command>> commands)
{
	m_commands = commands;
}

void MacroCommand::execute()
{
	for (auto &command : m_commands)
		command->execute();
}

void MacroCommand::undo()
{
	for (auto &command : m_commands)
		command->undo();
}