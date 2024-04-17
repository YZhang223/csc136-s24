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

  myList.insertInFront(1);
  myList.print();

  cout << "The position of 7 is " << myList.search(7) << endl;
  cout << "The position of 10 is " << myList.search(10) << endl;

  //testing copy constructor
  linkedList yourList(myList);
  yourList.insertAtEnd(11);

  myList.print();
  yourList.print();


  //testing destroyList
  yourList.destroyList();
  yourList.print();


  //testing assignment operator
  linkedList yourList2;
  yourList2 = myList;
  yourList2.insertAtEnd(15);
  yourList2.insertAtEnd(17);
  myList.print();
  yourList2.print();

  
  //test iterator
  linkedListIterator itr;

  int sum = 0;
  for(itr = myList.begin(); itr != myList.end(); ++itr)
    {
      sum += *itr;
    }
  myList.print();
  cout << sum << endl;

}
