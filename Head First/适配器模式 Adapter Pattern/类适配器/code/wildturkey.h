//
// Created by gaojian on 18-10-22.
//

#ifndef CODE_WILDTURKEY_H
#define CODE_WILDTURKEY_H

#include "turkey.h"

class WildTurkey : public Turkey {
public:
	WildTurkey() = default;

	void gobble() override;
	void fly() override;
};


#endif //CODE_WILDTURKEY_H
