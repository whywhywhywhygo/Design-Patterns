//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_TURKEYADAPTER_H
#define CODE_TURKEYADAPTER_H

#include "duck.h"
#include "wildturkey.h"

class TurkeyAdapter : public Duck, WildTurkey {
public:
	void quack() override;
	void fly() override;
};


#endif //CODE_TURKEYADAPTER_H
