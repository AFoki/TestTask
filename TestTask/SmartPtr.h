#pragma once

template<class T>
class SmartPtr
{
	T* MyPointer;
public:
	SmartPtr(T* MyPtr = nullptr) :MyPointer(MyPtr) {};

	SmartPtr(SmartPtr& AnotherSmartPtr)
	{
		this->MyPointer = AnotherSmartPtr.MyPointer;
		AnotherSmartPtr.MyPointer = nullptr;
	}

	~SmartPtr()
	{
		delete MyPointer;
	}

	SmartPtr& operator= (SmartPtr& AnotherPtr)
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

	T& operator*() const { return *MyPointer; }
	T* operator->() const { return MyPointer; }
	bool isNull() const { return MyPointer == nullptr; }
};

