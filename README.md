# Data Structures and Algorithms Library

This repository contains a collection of custom implementations of various data structures and algorithms in C++. Each library is designed to be modular, easy to use, and efficient. Below is a table summarizing the libraries available in this repository.

| Library Name         | Description                                                                 | Link to Library                                                                 |
|----------------------|-----------------------------------------------------------------------------|---------------------------------------------------------------------------------|
| `clsDynamicArray`    | A dynamic array implementation that automatically resizes itself as needed. | [clsDynamicArray](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyDynamicArray) |
| `clsMyStackArr`      | A stack implementation using a dynamic array as the underlying data structure. | [clsMyStackArr](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyStackArr)   |
| `clsMyQueueArr`      | A queue implementation using a dynamic array as the underlying data structure. | [clsMyQueueArr](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyQueueArr)   |
| `clsMyQueue`         | A queue implementation using a doubly linked list as the underlying data structure. | [clsMyQueue](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyQueue)         |
| `clsMyStack`         | A stack implementation using a queue (based on a doubly linked list) as the underlying data structure. | [clsMyStack](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyStack)         |
| `clsSingleLinkedList`| A single linked list implementation with basic operations like insertion, deletion, and traversal. | [clsSingleLinkedList](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MySignleLinkedList) |
| `clsDblLinkedList`   | A doubly linked list implementation with operations like insertion, deletion, and reverse traversal. | [clsDblLinkedList](https://github.com/HamzaUpgrade/STL-Libraries/tree/main/MyDoubleLinkedList) |

## Getting Started

To use any of the libraries in this repository, simply include the corresponding header file in your C++ project. Each library is templated, allowing you to use it with any data type.

### Example Usage

```cpp
#include "clsDynamicArray.h"

int main() {
    clsDynamicArray<int> myArray(5);
    myArray.SetItem(0, 10);
    myArray.PrintList();
    return 0;
}
