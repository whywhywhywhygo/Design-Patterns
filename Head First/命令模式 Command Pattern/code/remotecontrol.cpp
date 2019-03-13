//
// Created by gaojian on 18-10-17.
//

#include "remotecontrol.h"
#include "nocommand.h"

using std::shared_ptr;			using std::make_shared;

RemoteControl::RemoteControl()
{
	shared_ptr<Command> noCommand = make_shared<NoCommand>(NoCommand());
	for(auto &command : m_onCommand)
		command = noCommand;
	for(auto &command : m_offCommand)
		command = noCommand;
	m_undoCommand = noCommand;
}

void RemoteControl::setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand)
{
	if(slot < m_onCommand.size())
		m_onCommand[slot] = onCommand;
	if(slot < m_offCommand.size())
		m_offCommand[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
	if(slot < m_onCommand.size())
	{
		m_onCommand[slot]->execute();
		m_undoCommand = m_onCommand[slot];
	}
}

void RemoteControl::offButtonWasPushed(int slot)
{
	if(slot < m_offCommand.size())
	{
		m_offCommand[slot]->execute();
		m_undoCommand = m_offCommand[slot];
	}
}

void RemoteControl::undoButtonWasPushed()
{
	m_undoCommand->undo();
}