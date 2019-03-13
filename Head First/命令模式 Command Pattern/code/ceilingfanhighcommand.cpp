//
// Created by gaojian on 18-10-20.
//

#include "ceilingfanhighcommand.h"
#include "ceilingfan.h"

CeilingFanHighCommand::CeilingFanHighCommand(std::shared_ptr<CeilingFan> ceilingFan)
	: m_ceilingFan{ceilingFan}
{}

void CeilingFanHighCommand::execute()
{
	m_prevSpeed = m_ceilingFan->getSpeed();
	m_ceilingFan->high();
}

void CeilingFanHighCommand::undo()
{
	if (m_prevSpeed == m_ceilingFan->HIGH)
		m_ceilingFan->high();
	else if (m_prevSpeed == m_ceilingFan->MEDIUM)
		m_ceilingFan->medium();
	else if (m_prevSpeed == m_ceilingFan->LOW)
		m_ceilingFan->low();
	else if (m_prevSpeed == m_ceilingFan->OFF)
		m_ceilingFan->off();
}