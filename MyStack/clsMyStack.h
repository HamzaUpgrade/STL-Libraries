/*
    Author  => Hamza Abdulrahman ( R1DDIF )
	I implement the STACK DS depends Queue depends on my Doubly Linked List 
*/

#pragma once
#include <iostream>
#include "../MyQueue/clsMyQueue.h"
using namespace std;

template <class T>
class clsMyStack : public clsMyQueue <T>
{
public:

	void push(T Item)
	{
		clsMyQueue <T>::_MyList.InsertAtBeginning(Item);

	}

	T Top()
	{
		return clsMyQueue <T>::front();
	}

	T Bottom()
	{
		return clsMyQueue <T>::back();
	}

};

