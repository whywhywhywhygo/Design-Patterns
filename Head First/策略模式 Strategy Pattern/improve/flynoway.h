//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_FLYNOWAY_H
#define IMPROVE_FLYNOWAY_H

#include "flybehavior.h"

class FlyNoWay : public FlyBehavior {
public:
	FlyNoWay();

	virtual void fly() override;
};

#endif //IMPROVE_FLYNOWAY_H
