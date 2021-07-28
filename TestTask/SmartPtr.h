#pragma once

template<class T>
class SmartPtr
{
	T* MyPointer;
public:
	SmartPtr(T* MyPtr = nullptr);
	SmartPtr(SmartPtr<T>& AnotherSmartPtr);
	~SmartPtr();

	SmartPtr<T>& operator= (SmartPtr<T>& AnotherPtr);
	

	T& operator*() const { return *MyPointer; }
	T* operator->() const { return MyPointer; }
	bool isNull() const { return MyPointer == nullptr; }
};

