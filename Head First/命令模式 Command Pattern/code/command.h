//
// Created by gaojian on 18-10-17.
//

#ifndef CODE_COMMAND_H
#define CODE_COMMAND_H

class Command {
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif //CODE_COMMAND_H
