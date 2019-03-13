//
// Created by gaojian on 18-10-20.
//

#ifndef CODE_CEILINGFANHIGHCOMMAND_H
#define CODE_CEILINGFANHIGHCOMMAND_H

#include "command.h"
#include <memory>

class CeilingFan;

class CeilingFanHighCommand : public Command {
public:
	CeilingFanHighCommand(std::shared_ptr<CeilingFan> ceilingFan);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<CeilingFan> m_ceilingFan;
	int m_prevSpeed;
};


#endif //CODE_CEILINGFANHIGHCOMMAND_H
