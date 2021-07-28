#include "MyList.h"

template<class T>
MyList<T>::MyList()
{
	Size = 0;
	Head = nullptr;
}

template<class T>
MyList<T>::~MyList()
{
}

template<class T>
int MyList<T>::GetSize()
{
	return Size;
}

template<class T>
void MyList<T>::PushBack(T Data)
{
	if (Head == nullptr)
	{
		Head = new Node<T>(Data);
	}
	else
	{
		Node<T>* Current = this->Head;
		while (Current != nullptr)
		{
			Current = Current->NextNode;
		}
		Current->NextNode = new Node<T>(Data);
	}
	Size++;
}

template<class T>
T& MyList<T>::operator[](const int Index)
{
	int Counter = 0;
	Node<T>* Current = this->Head;
	while (Current != nullptr)
	{
		if (Counter == Index)
		{
			return Current->Data;
		}
		Current = Current->NextNode;
		Counter++;
	}
}
