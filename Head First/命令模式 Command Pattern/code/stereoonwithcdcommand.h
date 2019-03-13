//
// Created by gaojian on 18-10-19.
//

#ifndef CODE_STEREOONWITHCDCOMMAND_H
#define CODE_STEREOONWITHCDCOMMAND_H

#include "command.h"
#include <memory>

class Stereo;

class StereoOnWithCDCommand : public Command {
public:
	StereoOnWithCDCommand(std::shared_ptr<Stereo> stereo);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<Stereo> m_stereo;
};


#endif //CODE_STEREOONWITHCDCOMMAND_H
