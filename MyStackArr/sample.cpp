/*
    Author  => Hamza Abdulrahman ( R1DDIF )
*/

#include <iostream>
#include "clsMyStackArr.h"

using namespace std;

int main()
{
    
    clsMyStackArr <int> MyStack;
    
    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);
    cout << "\n\n--------------------------------------------------------------------\n\n";
    cout << "\nStack: \n";
    MyStack.PrintList();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();
    cout << "\n\n--------------------------------------------------------------------\n\n";
    
    //pop
    MyStack.pop();
    cout << "\n\n[+] Stack after pop() : \n";
    MyStack.PrintList();

    //get item 2
    cout << "\n[+] Get item 2\n"<<endl;
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);


    MyStack.Reverse();
    cout << "\n\n[+] Stack after reverse() : \n";
    MyStack.PrintList();


    MyStack.UpdateItem(2, 600);
    cout << "\n\n[+] Stack after updating Item(2) to 600 : \n";
    MyStack.PrintList();

    MyStack.InsertAfter(2, 800);
    cout << "\n\n[+] Stack after Inserting 800 after Item(2) : \n";
    MyStack.PrintList();



    MyStack.InsertAtFront(1000);
    cout << "\n\n[+] Stack after Inserting 1000 at top: \n";
    MyStack.PrintList();


    MyStack.InsertAtBack(2000);
    cout << "\n\n[+] Stack after Inserting 2000 at bottom: \n";
    MyStack.PrintList();


    MyStack.Clear();
    cout << "\n\n[+] Stack after Clear(): \n";
    MyStack.PrintList();

    system("pause>0");

}