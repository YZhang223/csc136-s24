#include "linkedList.h"
#include <iostream>
using namespace std;

int main()
{
  linkedList myList;

  
  myList.insertAtEnd(3);
  myList.insertAtEnd(5);
  myList.insertAtEnd(7);
  myList.insertAtEnd(9);

  myList.print();
  
}
