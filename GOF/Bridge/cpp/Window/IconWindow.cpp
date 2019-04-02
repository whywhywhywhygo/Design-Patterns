//
// Created by 17271 on 2019/3/30.
//

#include "IconWindow.h"
#include "WindowImp/WindowImp.h"
#include <iostream>

using std::cout;			using std::endl;
using std::weak_ptr;

IconWindow::IconWindow(std::weak_ptr<View> contents)
	: Window(contents)
{}

void IconWindow::drawContents()
{
	weak_ptr<WindowImp> imp = getWindowImp();
	if(imp.lock() != nullptr)
		imp.lock()->deviceBitmap(m_bitmapName, 0, 0);
}