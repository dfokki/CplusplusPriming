#pragma once
template <typename T>
class container
{
public:
	virtual void push(T *element) = 0;
	virtual T *pop() = 0;
	virtual void doSomething() = 0;

};

