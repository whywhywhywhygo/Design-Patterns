//
// Created by gaojian on 18-10-20.
//

#ifndef CODE_MACROCOMMAND_H
#define CODE_MACROCOMMAND_H

#include "command.h"
#include <memory>
#include <vector>

class MacroCommand : public Command {
public:
	MacroCommand(std::vector<std::shared_ptr<Command>> commands);

	void execute() override;
	void undo() override;

private:
	std::vector<std::shared_ptr<Command>> m_commands;
};


#endif //CODE_MACROCOMMAND_H
