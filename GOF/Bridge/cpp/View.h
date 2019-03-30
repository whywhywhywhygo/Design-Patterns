//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_VIEW_H
#define CPP_VIEW_H

#include "Window/Window.h"
#include <memory>

class View {
public:
	void drawOn(std::shared_ptr<Window> window);
};


#endif //CPP_VIEW_H
