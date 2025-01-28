/*
    Author  => Hamza Abdulrahman ( R1DDIF )
*/

#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

int main()
{

    clsMyQueueArr <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.PrintList();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.PrintList();


    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);


    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.PrintList();


    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.PrintList();


    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.PrintList();



    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.PrintList();


    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.PrintList();


    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.PrintList();

    system("pause>0");


}