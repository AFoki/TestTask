#pragma once
template<class T>
class MyList
{
public:

	MyList();
	~MyList();

	int GetSize();
	void PushBack(T Data);
	T& operator[] (const int index);

private:

	template<class T>
	class Node
	{
	public:
		Node* NextNode;
		T Data;
		Node(T NewData = T(), Node* NextNode = nullptr)
		{
			this->Data = NewData;
			this->NextNode = NextNode;
		}
	};

	int Size;
	Node<T>* Head;
};

