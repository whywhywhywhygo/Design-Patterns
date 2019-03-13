//
// Created by gaojian on 18-11-7.
//

#ifndef VIRTUAL_PROXY_IMAGEPROXY_H
#define VIRTUAL_PROXY_IMAGEPROXY_H

#include "icon.h"

class ImageProxy : public Icon {
public:
	ImageProxy();

	int getIconWidth() override;
	int getIconHeight() override;
	void paintIcon() override;

private:
	bool m_loaded;
};

#endif //VIRTUAL_PROXY_IMAGEPROXY_H
