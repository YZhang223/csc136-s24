#include "linkedList.h"
#include <iostream>
using namespace std;

int main()
{
  linkedList myList;

  
  myList.insertAtFront(2);
  myList.insertAtEnd(3);
  myList.insertAtEnd(5);
  myList.insertAtEnd(7);
  myList.insertAtEnd(9);
  myList.insertAtFront(1);

  myList.print();
  
  cout << "Search for 9: " << myList.search(9) << endl;
  cout << "Search for 10: " << myList.search(10) << endl;
}
