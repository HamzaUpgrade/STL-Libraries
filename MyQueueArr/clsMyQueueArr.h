/*
    Author  => Hamza Abdulrahman ( R1DDIF )
	I implement the Queue DS depends on my Dynamic array 
*/
//#pragma once
#include <iostream>
#include "../MyDynamicArray/clsDynamicArray.h"
using namespace std;
template <class T>
class clsMyQueueArr 
{
protected:
	clsDynamicArray <T> _MyList ;

public:

	void push(int value)
	{
		_MyList.InsertAtEnd(value);
	}
	
	int Size()
	{
		return _MyList.Size();
	}
	void pop()
	{
		_MyList.DeleteFirstItem();
	}
	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}
	T front()
	{
		return _MyList.GetItem(0);
	}
	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}
	bool isEmpty()
	{
		return _MyList.isEmpty();
	}
	void PrintList() 
	{
		_MyList.PrintList();
	}
	void Reverse() 
	{
		_MyList.Reverse();
	}
	void UpdateItem(int index, T newValue)
	{
		_MyList.SetItem(index,newValue);
	}
	void InsertAfter(int index, T newValue)
	{
		_MyList.InsertAfter(index, newValue);
	}
	void InsertAtFront(int newValue)
	{
		_MyList.InsertAtBeginning(newValue);
	}
	void InsertAtBack(int newValue)
	{
		_MyList.InsertAtEnd(newValue);
	}
	void Clear() 
	{
		_MyList.Clear();
	}

};