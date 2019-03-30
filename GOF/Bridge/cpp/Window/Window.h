//
// Created by 17271 on 2019/3/29.
//

#ifndef CPP_WINDOW_H
#define CPP_WINDOW_H

#include <memory>
#include <vector>
#include "../Point.h"

class View;
class WindowImp;

class Window : public std::enable_shared_from_this<Window> {
public:
	Window(std::weak_ptr<View> contents);

	virtual void drawContents();
	virtual void open();
	virtual void close();
	virtual void iconify();
	virtual void deiconify();
	virtual void setOrigin(Point &at);
	virtual void setExtent(Point &extent);
	virtual void lower();
	virtual void drawLine(Point &s, Point &e);
	virtual void drawRect(Point &bottomLeft, Point &topRight);
	virtual void drawPolgen(std::vector<Point> points);
	virtual void drawText(std::string text, Point &position);

protected:
	std::weak_ptr<WindowImp> getWindowImp();
	std::weak_ptr<View> getView();

private:
	std::shared_ptr<WindowImp> _imp;
	std::weak_ptr<View> _contents;
};


#endif //CPP_WINDOW_H
