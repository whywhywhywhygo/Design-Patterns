//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_WINDOWSYSTEMFACTORY_H
#define CPP_WINDOWSYSTEMFACTORY_H

#include <memory>

class WindowImp;

class WindowSystemFactory {
public:
	static WindowSystemFactory &getInstance();
	std::shared_ptr<WindowImp> makeWindowImp();

private:
	WindowSystemFactory() = default;
};


#endif //CPP_WINDOWSYSTEMFACTORY_H
