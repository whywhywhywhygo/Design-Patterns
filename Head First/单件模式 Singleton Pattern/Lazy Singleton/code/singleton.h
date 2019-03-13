//
// Created by gaojian on 18-10-16.
//

#ifndef CODE_SINGLETON_H
#define CODE_SINGLETON_H

class Singleton {
public:
	static Singleton &getInstance();
	void test();

private:
	Singleton() = default;
	~Singleton() = default;
};


#endif //CODE_SINGLETON_H
