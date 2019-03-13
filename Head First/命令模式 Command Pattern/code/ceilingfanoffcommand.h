//
// Created by gaojian on 18-10-20.
//

#ifndef CODE_CEILINGFANOFFCOMMAND_H
#define CODE_CEILINGFANOFFCOMMAND_H

#include "command.h"
#include <memory>

class CeilingFan;

class CeilingFanOffCommand : public Command {
public:
	CeilingFanOffCommand(std::shared_ptr<CeilingFan> ceilingFan);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<CeilingFan> m_ceilingFan;
	int m_prevSpeed;
};


#endif //CODE_CEILINGFANOFFCOMMAND_H
