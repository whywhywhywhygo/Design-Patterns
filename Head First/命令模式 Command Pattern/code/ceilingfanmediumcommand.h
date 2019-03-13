//
// Created by gaojian on 18-10-20.
//

#ifndef CODE_CEILINGFANMEDIUMCOMMAND_H
#define CODE_CEILINGFANMEDIUMCOMMAND_H

#include "command.h"
#include <memory>

class CeilingFan;

class CeilingFanMediumCommand : public Command {
public:
	CeilingFanMediumCommand(std::shared_ptr<CeilingFan> ceilingFan);

	void execute() override;
	void undo() override;

private:
	std::shared_ptr<CeilingFan> m_ceilingFan;
	int m_prevSpeed;
};


#endif //CODE_CEILINGFANMEDIUMCOMMAND_H
