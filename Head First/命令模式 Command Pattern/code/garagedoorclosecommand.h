//
// Created by gaojian on 18-10-19.
//

#ifndef CODE_GARAGEDOORCLOSECOMMAND_H
#define CODE_GARAGEDOORCLOSECOMMAND_H

#include "command.h"
#include <memory>

class GarageDoor;

class GarageDoorCloseCommand : public Command {
public:
	GarageDoorCloseCommand(std::shared_ptr<GarageDoor> garageDoor);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<GarageDoor> m_garageDoor;
};


#endif //CODE_GARAGEDOORCLOSECOMMAND_H
