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
  
   //testing search()
  cout << "Search for 9: " << myList.search(9) << endl;
  cout << "Search for 10: " << myList.search(10) << endl;

  /*
  //testing deleteNode()
  myList.deleteNode(7);
  myList.print();
  
  
  //testing copy constructor
  linkedList yourList(myList);
  yourList.insertAtEnd(11);

  myList.print();
  yourList.print();


  //testing destroylist() function
  yourList.destroyList();
  yourList.print();


  //test assignment operator
  linkedList yourList2;
  yourList2 = myList;
  yourList2.insertAtEnd(15);
  yourList2.insertAtEnd(17);
  myList.print();
  yourList2.print();
  */
}
