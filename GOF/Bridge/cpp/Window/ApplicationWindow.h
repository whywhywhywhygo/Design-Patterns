//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_APPLICATIONWINDOW_H
#define CPP_APPLICATIONWINDOW_H

#include "Window.h"

class ApplicationWindow : public Window {
public:
	ApplicationWindow(std::weak_ptr<View> contents);

	void drawContents() override;
};


#endif //CPP_APPLICATIONWINDOW_H
