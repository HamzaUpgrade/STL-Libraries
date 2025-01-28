/*

    Author  => Hamza Abdulrahman ( R1DDIF )

	I implement the Dynamic array 
*/
//#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
	int _Size;
	T* _tmpArr;
public:
	T* arr;
	clsDynamicArray()
	{
		_Size = 0;
	}
	clsDynamicArray(int size)
	{
		if (size < 0)
			size = 0;

		_Size = size;

		arr = new T[_Size];
	}
	~clsDynamicArray()
	{
		delete[] arr;
	}

	bool SetItem(int index, T Item)
	{
		if (index >= _Size || _Size < 0)
		{
			return false;
		}

		arr[index] = Item;
		return true;
	}
	bool IsEmpty()
	{
		return _Size == 0 ? true : false;
	}
	int Size()
	{
		return _Size;
	}
	void Resize(int size)
	{
		_tmpArr = new T[size];
		for (int i = 0; i < _Size; i++)
		{
			if (i < size)
			{
				_tmpArr[i] = arr[i];
			}
		}
		delete[] arr;
		arr = _tmpArr;
		_Size = size;
	}
	T GetItem(int index)
	{
		return arr[index];
	}
	void Reverse()
	{
		_tmpArr = new T[_Size];
		for (int i = 0; i < _Size; i++)
		{
			_tmpArr[i] = arr[_Size - 1 - i];
		}
		delete[] arr;
		arr = _tmpArr;
	}
	void Clear()
	{
		_Size = 0;
		_tmpArr = new T[0];
		delete[] arr;
		arr = _tmpArr;
	}
	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
		{
			return false;
		}
		_tmpArr = new T[_Size - 1];

		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_tmpArr[i] = arr[i];
		}
		//copy all after index
		for (int i = index + 1; i < _Size + 1; i++)
		{
			_tmpArr[i - 1] = arr[i];
		}
		delete[] arr;
		_Size--;
		arr = _tmpArr;
		return true;
	}
	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}
	void DeleteLastItem()
	{
		DeleteItemAt(_Size - 1);
	}
	int Find(T Item)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (arr[i] == Item)
			{
				return i;
			}
		}
		return -1;
	}
	bool DeleteItem(int Item)
	{
		int index = Find(Item);
		if (index == -1)
		{
			return false;
		}

		DeleteItemAt(index);
		return true;
	}
	bool InsertAt(int index, T Item)
	{
		if (index < 0 || index > _Size)
		{
			return false;
		}

		_tmpArr = new T[_Size + 1];

		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_tmpArr[i] = arr[i];
		}

		_tmpArr[index] = Item;

		//copy all after index
		for (int i = index + 1; i < _Size + 1; i++)
		{
			_tmpArr[i] = arr[i - 1];
		}
		_Size++;
		delete[] arr;
		arr = _tmpArr;
	}
	void InsertAtBeginning(T item)
	{
		InsertAt(0, item);
	}
	bool InsertBefore(int index, T item)
	{
		if (index < 1)
			return InsertAt(0, item);
		else
			return InsertAt(index-1, item);
	}
	bool InsertAfter(int index, T item)
	{
		if (index >= _Size)
			return InsertAt(_Size - 1, item);
		else
			return InsertAt(index + 1, item);
	}
	bool InsertAtEnd(int item)
	{
		return InsertAt(_Size, item);
	}
	void PrintList()
	{
		int i = 0;
		while (i < _Size)
		{
			cout << arr[i] << " ";
			i++;
		}
	}
};