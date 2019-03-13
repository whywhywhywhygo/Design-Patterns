//
// Created by gaojian on 18-10-10.
//

#ifndef IMPROVE_FLYWITHWINGS_H
#define IMPROVE_FLYWITHWINGS_H

#include "flybehavior.h"

class FlyWithWings : public FlyBehavior {
public:
	FlyWithWings();

	virtual void fly() override;
};


#endif //IMPROVE_FLYWITHWINGS_H
