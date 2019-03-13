//
// Created by gaojian on 18-10-19.
//

#ifndef CODE_STEREOOFFCOMMAND_H
#define CODE_STEREOOFFCOMMAND_H

#include "command.h"
#include <memory>

class Stereo;

class StereoOffCommand : public Command {
public:
	StereoOffCommand(std::shared_ptr<Stereo> stereo);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<Stereo> m_stereo;
};


#endif //CODE_STEREOOFFCOMMAND_H
