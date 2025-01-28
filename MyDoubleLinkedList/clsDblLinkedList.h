/*
    Author  => Hamza Abdulrahman ( R1DDIF )
	I implement the Double Linked list
*/

#pragma once
#include <iostream>
using namespace std;

template<class T>
class clsDblLinkedList
{
public:
    struct Node
    {
        T value;
        Node* next;
        Node* prev;
    };
protected:
    int _Size = 0;
private:
    Node* _head = NULL;
public:

    void InsertAtBeginning(T value)
    {
    /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the current head of the list.
        3-Set the previous pointer of the current head to the new node.
        4-Set the new node as the new head of the list.
    */

        Node* new_node = new Node();
        
        new_node->value = value;
        new_node->next = _head;
        new_node->prev = NULL;
        if (_head != NULL)
        {
            _head->prev = new_node;
        }
        _head = new_node;
        _Size++;
    }
    Node* Find(T value)
    {
        Node* current = _head;
        while (current != NULL)
        {
            if (current->value == value)
            { 
                return current;
            }
            current = current->next;
        }
        return NULL;
    }
    void InsertAfter(Node* &PrevNode, T value)
    {
    /*   
        1 - Create a new node with the desired value.
        2-Set the next pointer of the new node to the next node of the current node.
        3-Set the previous pointer of the new node to the current node.
        4-Set the next pointer of the current node to the new node.
        5-Set the previous pointer of the next node to the new node(if it exists).
    */

        if (PrevNode == NULL)
        {
            cout << "\nthis given previous node cannot be NULL\n";
            return;
        }
        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = PrevNode->next;
        new_node->prev = PrevNode;
        
        if (PrevNode->next != NULL) {
            PrevNode->next->prev = new_node;
        }
        PrevNode->next = new_node;
        _Size++;
    }
    bool InsertAfter(int index, T value)
    {
        Node* current = GetNode(index);
        if (current != NULL)
        {
            InsertAfter(current, value);
            return true;
        }
        return false;
    }
    void InsertAtEnd(T value)
    {
    /*
        1-creat a new node with the desired value
        2-traverse the list to find the last node
        3-set the next pointer of the last node to the new node
        4-set the previous pointer of the new node to the last node
    */

        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = NULL;
        if (_head == NULL)
        {
            //if linked list is empty
            new_node->prev = NULL;
            _head = new_node;
            _Size++;
            return;
        }

        Node* PrevNode = _head;
        while (PrevNode->next != NULL)
        {
            PrevNode = PrevNode->next; //1 2 3 4 5 
        }
        PrevNode->next = new_node;
        new_node->prev = PrevNode;
        _Size++;
    }
    void DeleteNode(Node* &TargetNode)
    {
    /* 
        1- set the next pointer of the previous node to the next pointer of the current(TargetNode)
        2- set the previous pointer of the next node to the previous pointer of the current
        3- Delete the current node
    */

        if (_head == NULL || TargetNode == NULL) return;
        if (_head == TargetNode)
            _head = TargetNode->next;
        
        if (TargetNode->next != NULL)
            TargetNode->next->prev = TargetNode->prev;
        
        if (TargetNode->prev != NULL)
            TargetNode->prev->next = TargetNode->next;

        delete TargetNode;
        _Size--;
    }
    void DeleteFirstNode()
    {
    /*
        1-Store a reference to the head node in a temporary variable.
        2-Update the head pointer to point to the next node in the list.
        3-Set the previous pointer of the new head to NULL.
        4-Delete the temporary reference to the old head node.
    */

        if (_head == NULL) return;

        Node* current = _head;
        _head = current->next;
        if (_head != NULL){
            _head->prev = NULL;
        }
            
        delete current;
        _Size--;
    }
    void DelteLastNode()
    {
        /*
            1-Traverse the list to find the last node.
            2-Set the next pointer of the second-to-last node to NULL.
            3-Delete the last node.
        */

        if (_head == NULL) return;
        Node* current = _head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        current->next = NULL;
        _Size--;
    }
    int Size()
    {
        return _Size;
    }
    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }
    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }
    Node* GetLastNode()
    {
        Node* current = _head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        return current;
    }
    Node* GetNode(int index)
    {
        if (index > _Size - 1 || index < 0)
            return NULL;

        Node* current = _head;
        int counter = 0;

        while (current != NULL && current->next != NULL)
        {
            if (counter == index)
                break;

            current = current->next;
            counter++;
        }
        return current;
    }
    T GetItem(int index)
    {
        Node* N = GetNode(index);

        if (N == NULL)
            return NULL;
        else
            return N->value; // return item node
    }
    bool UpdateItem(int index, int newitem)
    {
        Node* current = GetNode(index);
        if (current != NULL)
        {
            current->value = newitem;
            return true;
        }
        return false;
    }
    void Reverse() 
    {
        Node* current = _head;
        Node* tmp = NULL;
        while (current != NULL)
        {
            tmp = current->prev;
            current->prev = current->next;
            current->next = tmp;
            current = current->prev;
        } 
        if(tmp != NULL)
        {
            _head = tmp->prev;
        }
    }
    void PrintList()
    {
        Node* current = _head;
        while (current != NULL)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};