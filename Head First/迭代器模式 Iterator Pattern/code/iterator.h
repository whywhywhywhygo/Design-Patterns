//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_ITERATOR_H
#define CODE_ITERATOR_H

template<class Item>
class Iterator {
public:
	virtual Item * next() = 0;
	virtual bool hasNext() = 0;
};

#endif //CODE_ITERATOR_H
