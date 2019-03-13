//
// Created by gaojian on 18-10-17.
//

#ifndef CODE_LIGHTONCOMMAND_H
#define CODE_LIGHTONCOMMAND_H

#include "command.h"
#include <memory>

class Light;

class LightOnCommand : public Command {
public:
	LightOnCommand(std::shared_ptr<Light> light);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<Light> m_light;
};


#endif //CODE_LIGHTONCOMMAND_H
