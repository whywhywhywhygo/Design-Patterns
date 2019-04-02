//
// Created by 17271 on 2019/3/30.
//

#include "WindowSystemFactory.h"
#include "Window/WindowImp/XWindowImp.h"

using std::make_shared;

WindowSystemFactory& WindowSystemFactory::getInstance()
{
	static WindowSystemFactory factory;
	return factory;
}

std::shared_ptr<WindowImp> WindowSystemFactory::makeWindowImp()
{
	return make_shared<XWindowImp>();
}