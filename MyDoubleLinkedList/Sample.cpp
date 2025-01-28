#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main() {
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "\n[+] Node with value 2 is Found.\n";
    else
        cout << "\n[-] Node Is not Found.\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

     MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nDelete First Node (1):\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DelteLastNode();
    cout << "\nDelete Last Node (700):\n";
    MydblLinkedList.PrintList();

    cout << "\nLinked List Size: ";
    cout << MydblLinkedList.Size();

    if (MydblLinkedList.IsEmpty())
        cout << "\n[+] Yes Lest is Empty.\n";
    else
        cout << "\n[-] No is not Empty\n";

    cout << "\nNumber of item Size: ";
    cout << MydblLinkedList.Size();
   // cout << "\n[+] Executing Clear() function...";
   // MydblLinkedList.Clear();
   //cout << "\nNumber of item Size After Clearing: ";
    cout << MydblLinkedList.Size();
    cout << endl;
    MydblLinkedList.PrintList();
    MydblLinkedList.Reverse();
    cout << "\nLinked List After Contenet reverse:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N;
    N = MydblLinkedList.GetNode(2);
    cout << "\nNode (index 2) Value is: " << N->value;

    cout << "\nitem (index 2) value is: " << MydblLinkedList.GetItem(2);
    
    cout << "\n\nAfter Update Item(index 2): \n";
    MydblLinkedList.UpdateItem(2, 600);
    MydblLinkedList.PrintList();

    cout << "\n\nInsert After index 2: \n";
    MydblLinkedList.InsertAfter(2, 700);
    MydblLinkedList.PrintList();
    
    return 0;
}