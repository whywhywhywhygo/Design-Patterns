//
// Created by 17271 on 2019/3/30.
//

#ifndef CPP_PMWINDOWIMP_H
#define CPP_PMWINDOWIMP_H

#include "WindowImp.h"

class PMWindowImp : public WindowImp {
public:
	~PMWindowImp() override = default;

	void impTop() override;
	void impBottom() override;
	void impSetExtent(Point &p) override;
	void impSetOrigin(Point &p) override;
	void deviceRect(Coord topLeft, Coord bottomLeft, Coord topRight, Coord bottomRight) override;
	void deviceText(std::string text, Coord c1, Coord c2) override;
	void deviceBitmap(std::string bitmapName, Coord c1, Coord c2) override;
};


#endif //CPP_PMWINDOWIMP_H
