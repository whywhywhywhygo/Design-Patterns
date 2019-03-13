//
// Created by gaojian on 18-10-17.
//

#ifndef CODE_SIMPLEREMOTECONTROL_H
#define CODE_SIMPLEREMOTECONTROL_H

#include "command.h"
#include <memory>
#include <array>

class RemoteControl {
public:
	RemoteControl();

	void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	void undoButtonWasPushed();

private:
	std::array<std::shared_ptr<Command>, 7> m_onCommand;
	std::array<std::shared_ptr<Command>, 7> m_offCommand;
	std::shared_ptr<Command> m_undoCommand;
};


#endif //CODE_SIMPLEREMOTECONTROL_H
