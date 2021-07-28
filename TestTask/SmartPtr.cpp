#include "SmartPtr.h"

template<class T>
SmartPtr<T>::SmartPtr(T* MyPtr) :MyPointer(MyPtr) {}

template<class T>
SmartPtr<T>::SmartPtr(SmartPtr<T>& AnotherSmartPtr)
{
	this->MyPointer = AnotherSmartPtr.MyPointer;
	AnotherSmartPtr.MyPointer = nullptr;
}

template<class T>
SmartPtr<T>::~SmartPtr()
{
	delete MyPointer;
}

template<class T>
SmartPtr<T>& SmartPtr<T>::operator= (SmartPtr<T>& AnotherPtr)
{
	if (&AnotherPtr == this)
	{
		return *this;
	}
	delete MyPointer;
	MyPointer = AnotherPtr.MyPointer;
	AnotherPtr.MyPointer = nullptr;
	return *this;
}
