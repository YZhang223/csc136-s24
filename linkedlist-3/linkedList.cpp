#include "linkedList.h"
#include <iostream>

using namespace std;

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


void linkedList::print() const
{
  node *temp = head;
  while(temp != nullptr)
    {
      cout << temp -> num;

      temp = temp -> next;
      if (temp!= nullptr)
	cout << " -> ";
    }
  cout << endl;

}


void linkedList::insertAtFront(int x)
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
      temp -> next = head;
      head = temp;
    }
  count++;

}

bool linkedList::search(int x) const
{
  node* temp = head;

  while(temp != nullptr)
  {
    if (temp -> num == x)
      return true;
    
    temp = temp -> next;
  }

  return false;


}