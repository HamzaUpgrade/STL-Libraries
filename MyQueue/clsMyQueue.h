/*
    Author  => Hamza Abdulrahman ( R1DDIF )
	I implement the QUEUE DS depend on Double Linked list
*/

#pragma once
#include<iostream>
#include "../MyDoubleLinkedList/clsDblLinkedList.h"
using namespace std;

template<class T>
class clsMyQueue
{
protected:
    clsDblLinkedList <T> _MyList;

public:
    void push(T value)
    {
        _MyList.InsertAtEnd(value);
    }
    int Size()
    {
        return _MyList.Size();
    }
    T front()
    {
        return _MyList.GetItem(0);
    }
    T back() 
    {
        return _MyList.GetItem(Size()-1);
    }
    void pop()
    {
        _MyList.DeleteFirstNode();
    }
    bool isEmpty()
    {
        return _MyList.IsEmpty();
    }
    T GetItem(int index) 
    {
        return _MyList.GetItem(index);
    }
    void Reverse() 
    {
        _MyList.Reverse();
    }
    void UpdateItem(int index, T NewValue)
    {
        _MyList.UpdateItem(index, NewValue);
    }
    void InsertAtFront(T value) 
    {
        _MyList.InsertAtBeginning(value);
    }
    void InsertAtBack(T value)
    {
        _MyList.InsertAtEnd(value);
    }
    void Clear() 
    {
        _MyList.Clear();
    }
    void PrintList()

    {
        _MyList.PrintList();

    }
    
};

