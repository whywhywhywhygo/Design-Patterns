//
// Created by gaojian on 18-10-19.
//

#ifndef CODE_NOCOMMAND_H
#define CODE_NOCOMMAND_H

#include "command.h"

class NoCommand : public Command {
public:
	NoCommand() = default;

	void execute() override;
	void undo() override;
};


#endif //CODE_NOCOMMAND_H
