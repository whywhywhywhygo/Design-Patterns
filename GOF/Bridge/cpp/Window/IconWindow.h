//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_ICONWINDOW_H
#define CPP_ICONWINDOW_H

#include "Window.h"
#include <string>

class IconWindow : public Window {
public:
	IconWindow(std::weak_ptr<View> contents);

	void drawContents() override;

private:
	std::string m_bitmapName;
};


#endif //CPP_ICONWINDOW_H
