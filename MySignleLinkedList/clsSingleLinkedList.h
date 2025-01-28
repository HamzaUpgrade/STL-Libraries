/*
    Author  => Hamza Abdulrahman ( R1DDIF )
	I implement the Single Linked list
*/

#pragma once
#include <iostream>
using namespace std;

template<class T>
class clsSingleLinkedList
{
public:
    struct Node
    {
        T value;
        Node* next;
    };
private:
    Node* head = NULL;

public:

    void InsertAtBeginning(T value)
    {
        Node* new_node = new Node();
        
        new_node->value = value;
        new_node->next = head;

        head = new_node;
    }
    Node* Find(T value)
    {
        Node* current = head;
        while (current != NULL)
        {
            if (current->value == value)
                return current;

            current = current->next;
        }
        return NULL;
    }
    void InsertAfter(Node* &PrevNode, T value)
    {
        if (PrevNode == NULL)
        {
            cout << "\nthis given previous node cannot be NULL\n";
            return;
        }
        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = PrevNode->next;
        PrevNode->next = new_node;
    }
    void InsertAtEnd(T value)
    {
        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = NULL;
        if (head == NULL)
        {
            //if linked list is empty
            head = new_node;
            return;
        }

        Node* LastNode = head;
        while (LastNode->next != NULL)
        {
            LastNode = LastNode->next; //1 2 3 4 5 
        }
        LastNode->next = new_node;
        
    }
    void DeleteNode(Node* &TargetNode)
    {
        if (head == NULL) return;
        if (head->next == NULL) return;

        Node* current = head;
        while (current != NULL)
        {
            if (current->next == TargetNode)
            {
                current->next = TargetNode->next;
                delete TargetNode;
            }
            current = current->next;
        }
    }
    void DeleteFirstNode()
    {
        if (head == NULL) return;

        Node* current = head;
        head = current->next;
        delete current;
    }
    void DelteLastNode()
    {
        if (head == NULL) return;
        Node* current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        current->next = NULL;
    }
    void PrintList()
    {
        Node* current = head;
        while (current != NULL)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    
};

