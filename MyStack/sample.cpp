/*
    Author  => Hamza Abdulrahman ( R1DDIF )
*/

#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main() {
    clsMyStack <int> MyStack;
    MyStack.push(1);
    MyStack.push(2);
    MyStack.push(3);
    MyStack.push(4);
    MyStack.push(5);

    cout << "Content Queue:\n";
    MyStack.PrintList();

    cout << "\n\nQueue size: "<< MyStack.Size();
    cout << "\nQueue Top: " << MyStack.Top();
    cout << "\nQueue Battom: " << MyStack.Bottom();

    cout << "\n\n[+] start POPING...\n";
    MyStack.pop();
    cout << "Content Queue After POP:\n";
    MyStack.PrintList();

    cout << "\n\nQueue size: " << MyStack.Size();
    cout << "\nQueue Top: " << MyStack.Top();
    cout << "\nQueue Bottom: " << MyStack.Bottom();

    if (MyStack.isEmpty())
        cout << "\n\n[-] Is Empty\n";
    else
        cout << "\n\n[+] Not Empty\n";
    
    cout << "\n\nItem(2) :" << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\nQueue after Reversing : \n";
    MyStack.PrintList();

    MyStack.UpdateItem(2, 600);
    cout << "\n\nQueue After updating Item(2) to 600 : \n";
    MyStack.PrintList();
    
    MyStack.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 in front: \n";
    MyStack.PrintList();
    
    MyStack.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 in back: \n";
    MyStack.PrintList();
    
    MyStack.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyStack.PrintList();

    return 0;
}