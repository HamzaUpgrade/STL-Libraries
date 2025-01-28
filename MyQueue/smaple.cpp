/*
    Author  => Hamza Abdulrahman ( R1DDIF )
*/
#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main() {
    clsMyQueue <int> MyQueue;
    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);
    MyQueue.push(5);

    cout << "Content Queue:\n";
    MyQueue.PrintList();

    cout << "\n\nQueue size: "<< MyQueue.Size();
    cout << "\nQueue front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    cout << "\n\n[+] start POPING...\n";
    MyQueue.pop();
    cout << "Content Queue After POP:\n";
    MyQueue.PrintList();

    cout << "\n\nQueue size: " << MyQueue.Size();
    cout << "\nQueue front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    if (MyQueue.isEmpty())
        cout << "\n\n[-] Is Empty\n";
    else
        cout << "\n\n[+] Not Empty\n";
    
    cout << "\n\nItem(2) :" << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\nQueue after Reversing : \n";
    MyQueue.PrintList();

    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue After updating Item(2) to 600 : \n";
    MyQueue.PrintList();
    
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 in front: \n";
    MyQueue.PrintList();
    
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 in back: \n";
    MyQueue.PrintList();
    
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.PrintList();

    return 0;
}