//
// Created by gaojian on 18-11-7.
//

#ifndef VIRTUAL_PROXY_ICON_H
#define VIRTUAL_PROXY_ICON_H

class Icon {
public:
	virtual int getIconWidth() = 0;
	virtual int getIconHeight() = 0;
	virtual void paintIcon() = 0;
};

#endif //VIRTUAL_PROXY_ICON_H
