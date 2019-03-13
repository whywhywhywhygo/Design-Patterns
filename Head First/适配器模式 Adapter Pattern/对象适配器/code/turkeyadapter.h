//
// Created by gaojian on 18-10-21.
//

#ifndef CODE_TURKEYADAPTER_H
#define CODE_TURKEYADAPTER_H

#include "duck.h"
#include <memory>

class Turkey;

class TurkeyAdapter : public Duck {
public:
	TurkeyAdapter(std::shared_ptr<Turkey> turkey);

	void quack() override;
	void fly() override;

private:
	std::shared_ptr<Turkey> m_turkey;
};


#endif //CODE_TURKEYADAPTER_H
