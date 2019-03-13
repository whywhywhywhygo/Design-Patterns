//
// Created by gaojian on 18-10-21.
//

#include "turkeyadapter.h"
#include "turkey.h"

TurkeyAdapter::TurkeyAdapter(std::shared_ptr<Turkey> turkey)
	: m_turkey{turkey}
{}

void TurkeyAdapter::quack()
{
	m_turkey->gobble();
}

void TurkeyAdapter::fly()
{
	for(int i = 0; i != 2; ++i)
		m_turkey->fly();
}