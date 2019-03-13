//
// Created by gaojian on 18-10-19.
//

#ifndef CODE_LIGHTOFFCOMMAND_H
#define CODE_LIGHTOFFCOMMAND_H

#include "command.h"
#include <memory>

class Light;

class LightOffCommand : public Command {
public:
	LightOffCommand(std::shared_ptr<Light> light);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<Light> m_light;
};

#endif //CODE_LIGHTOFFCOMMAND_H
