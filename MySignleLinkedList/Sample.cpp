/*
    Author  => Hamza Abdulrahman ( R1DDIF )
*/
#include <iostream>
#include "clsSingleLinkedList.h"
using namespace std;

int main() {
    clsSingleLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    //1 2 3 4 5
    cout << "\nLinked List Content\n";
    MydblLinkedList.PrintList();

    clsSingleLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "\n[+] Node with value 2 is Found.\n";
    else
        cout << "\n[-] Node Is not Found.\n";

    MydblLinkedList.InsertAfter(N1,500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();
    //1 2 500 3 4 5 700

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsSingleLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();
    //1 2 500 3 5 700

    MydblLinkedList.DeleteFirstNode();
    cout << "\nDelete First Node (1):\n";
    MydblLinkedList.PrintList();
    // 2 500 3 5 700

    MydblLinkedList.DelteLastNode();
    cout << "\nDelete Last Node (700):\n";
    MydblLinkedList.PrintList();
    //1 2 500 3 5 
    return 0;
}