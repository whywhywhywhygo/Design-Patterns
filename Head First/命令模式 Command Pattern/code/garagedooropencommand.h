//
// Created by gaojian on 18-10-17.
//

#ifndef CODE_GARAGEDOOROPENCOMMAND_H
#define CODE_GARAGEDOOROPENCOMMAND_H

#include "command.h"
#include <memory>

class GarageDoor;

class GarageDoorOpenCommand : public Command {
public:
	GarageDoorOpenCommand(std::shared_ptr<GarageDoor> garageDoor);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<GarageDoor> m_garageDoor;
};


#endif //CODE_GARAGEDOOROPENCOMMAND_H
