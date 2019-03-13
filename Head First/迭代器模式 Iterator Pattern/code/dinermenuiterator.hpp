//
// Created by gaojian on 18-10-26.
//

#ifndef CODE_DINERMENUITERATOR_H
#define CODE_DINERMENUITERATOR_H

#include "iterator.h"

template<class Item>
class DinerMenuIterator : public Iterator<Item> {
public:
	DinerMenuIterator(Item *item[], size_t size)
			: m_size{size}, m_position{0}
	{
		items = new Item *[m_size];
		for(size_t i = 0; i != m_size; ++i)
			items[i] = item[i];
	}

	Item *next() override
	{
		return items[m_position++];
	}

	bool hasNext() override
	{
		return m_position + 1 != m_size;
	}

private:
	Item **items;
	size_t m_size;
	int m_position;
};

#endif //CODE_DINERMENUITERATOR_H
