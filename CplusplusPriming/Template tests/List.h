#pragma once
#include "container.h"
#include <iterator>
template <typename T>
class List :
	public container<T>
{

	begin() { return iterator };
	end() { return iterator };

public:
	virtual void push(T *element) { element->pushback(); };
	virtual T* pop() { element->popUp(); };

	virtual void doSomething()
	{
		for (List::iterator currItem = begin(); currItem != end(); ++currItem)
		{
			T* item = *curritem;
			item->SomeMethod();
		}
	};

};

