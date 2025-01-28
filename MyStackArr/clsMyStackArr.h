/*

    Author  => Hamza Abdulrahman ( R1DDIF )

	I implement the STACK DS depends on Queue depended on my Dynamic array 
*/
//#pragma once
#include <iostream>
#include "../MyQueueArr/clsMyQueueArr.h"
using namespace std;

template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
{

public:
	
	void push(T value)
	{
		clsMyQueueArr <T>::_MyList.InsertAtBeginning(value);
	}
	T Top()
	{
		return clsMyQueueArr <T>::GetItem(0);
	}
	T Bottom()
	{
		return clsMyQueueArr <T>::_MyList.GetItem(clsMyQueueArr <T>::Size()-1);
	}
};

