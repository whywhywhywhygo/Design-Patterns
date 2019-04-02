//
// Created by 17271 on 2019/3/29.
//

#include "Window.h"
#include "WindowImp/WindowImp.h"
#include "../WindowSystemFactory.h"

using std::weak_ptr;

Window::Window(std::weak_ptr<View> contents)
	: _contents{contents}
{}

void Window::drawContents()
{}

void Window::open()
{}

void Window::close()
{}

void Window::iconify()
{}

void Window::deiconify()
{}

void Window::setOrigin(Point &at)
{}

void Window::setExtent(Point &extent)
{}

void Window::lower()
{}

void Window::drawLine(Point &s, Point &e)
{}

void Window::drawRect(Point &bottomLeft, Point &topRight)
{
	weak_ptr<WindowImp> imp = getWindowImp();
	imp.lock()->deviceRect(bottomLeft.x(), bottomLeft.y(), topRight.x(), topRight.y());
}

void Window::drawPolgen(std::vector<Point> points)
{}

void Window::drawText(std::string text, Point &position)
{}

std::weak_ptr<WindowImp> Window::getWindowImp()
{
	if(_imp == nullptr)
		_imp = WindowSystemFactory::getInstance().makeWindowImp();
	return _imp;
}

std::weak_ptr<View> Window::getView()
{
	return _contents;
}