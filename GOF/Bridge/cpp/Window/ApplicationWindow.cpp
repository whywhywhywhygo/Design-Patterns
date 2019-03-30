//
// Created by 17271 on 2019/3/30.
//

#include "ApplicationWindow.h"
#include "../View.h"

#include <iostream>

using std::cout;				using std::endl;

ApplicationWindow::ApplicationWindow(std::weak_ptr<View> contents)
	: Window(contents)
{}

void ApplicationWindow::drawContents()
{
	getView().lock()->drawOn(shared_from_this());
}