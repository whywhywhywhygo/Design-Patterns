//
// Created by gaojian on 18-11-8.
//

#ifndef CODE_QUACKOLOGIST_H
#define CODE_QUACKOLOGIST_H

#include "observer.h"

class Quackologist : public Observer {
public:
	void update(std::shared_ptr<QuackObservable> duck) override;
};


#endif //CODE_QUACKOLOGIST_H
