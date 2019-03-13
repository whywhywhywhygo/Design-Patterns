//
// Created by gaojian on 18-11-7.
//

#include "imageproxy.h"
#include <iostream>
#include <thread>

using std::cout;			using std::endl;
using std::thread;

ImageProxy::ImageProxy()
	: m_loaded{false}
{}
int ImageProxy::getIconWidth()
{
	if(m_loaded)
		return 100;
	else
		return 800;
}

int ImageProxy::getIconHeight()
{
	if(m_loaded)
		return 100;
	else
		return 600;
}

void ImageProxy::paintIcon()
{
	if(m_loaded)
		cout << "Icon loaded" << endl;
	else
	{
		cout << "Loading" << endl;
		thread t([&]() {
			m_loaded = true;
			paintIcon();
		});
		t.detach();
	}
}