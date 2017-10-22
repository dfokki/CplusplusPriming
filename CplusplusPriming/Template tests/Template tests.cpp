// Template tests.cpp : Defines the entry point for the console application.
//


#include "List.h"
#include <cstdio>
#include <iostream>
class Item
{
public:
	virtual void SomeMethod()  = 0;
};

class ConcreteItem : public Item
{
public:
	virtual void SomeMethod()
	{
		std::cout << "concrete item here" << std::endl;
	}
};
void AddItemToContainer(container<Item> &container, Item *item)
{
	container.push(item);
}

int main()
{
	
	List<Item> itemlist;
	ConcreteItem *item = new ConcreteItem;
	AddItemToContainer(itemlist , item);

	itemlist.doSomething();
    return 0;
}

