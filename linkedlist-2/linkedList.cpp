#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}


linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int x)
{
  //create a new list node
  node *temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  //insert the node at the end
  if (head == nullptr) //list is empty
    {
      head = temp;
      tail = temp;
    }
  else  //list is not empty
    {
      tail -> next = temp;
      tail = tail -> next;
    }
  count++;
}



