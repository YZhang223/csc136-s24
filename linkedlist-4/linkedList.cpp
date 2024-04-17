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

void linkedList::insertInFront(int x)
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



int linkedList::search(int x)
{
  node* temp = head;
  int pos = 1;

  while(temp != nullptr)
    {
      if (temp -> num == x)
	return pos;
      else
	{
	  temp = temp -> next;
	  pos++;
	}
    }
  return -1;
}

void linkedList::deleteNode(int x)
{
  
  //case 1: if list is empty
  if (head == nullptr)
    {
      cout << "Cannot delete from an empty list.\n";
    }
  //case 2: x is in the first node
  else if (head -> num == x)
    {
      node * temp;
      temp = head;
      head = head -> next;
      count--;

      if (head == nullptr) // list has only one node
	tail = nullptr;

      delete temp; //deallocate the node
    }
  //case 3: x is not in the first node
  else
    {
      bool found = false;
      node* prev = head;
      node* current = head -> next;

      //use a while loop to find x
      while (current != nullptr)
	{
	  if (current-> num == x)
	    {
	      found = true;
	      break;
	    }
	  else
	    {
	      prev = prev -> next;
	      current = current -> next;
	    }
	}

      //delete the node containing x
      if (found == true)
	{
	  prev -> next = current -> next;
	  count--;

	  if (tail == current) //x is in the last node
	    tail = prev;

	  delete current; //deallocate memory

	}
      else
	cout << "The item is not in the list.\n";	
    }
}




linkedList::linkedList(const linkedList& other)
{
  if (other.head == nullptr) // other is empty
    {
      count = 0;
      head = nullptr;
      tail = nullptr;
    }
  else  //other is not empty
    {
      count = other.count;
      
      //copy the first node
      node *temp = other.head;
      node *temp2 = new node;

      temp2 -> num = temp -> num;
      temp2 -> next = nullptr;
      head = temp2;
      tail = temp2;

      //copy the rest of the list
      temp = temp -> next;
      
      while(temp != nullptr)
	{
	  temp2 = new node;
	  temp2 -> num = temp -> num;
	  temp2 -> next = nullptr;
	  
	  tail -> next = temp2;
	  tail = temp2;

	  temp = temp -> next;
	}
    }

}

void linkedList::destroyList()
{
  //deallocate all the list nodes
  node *temp;
  while(head != nullptr)
    {
      temp = head;
      head = head -> next;
      delete temp;
    }

  tail = nullptr;
  count = 0;
}

linkedList::~linkedList()
{
  destroyList();
}

const linkedList& linkedList::operator=(const linkedList& other)
{
  if (this != &other)
    {
      destroyList();

      if (other.head == nullptr) // other is empty
	{
	  count = 0;
	  head = nullptr;
	  tail = nullptr;
	}
      else  //other is not empty
	{
	  count = other.count;

	  //copy the first node
	  node *temp = other.head;
	  node *temp2 = new node;
	  
	  temp2 -> num = temp -> num;
	  temp2 -> next = nullptr;
	  head = temp2;
	  tail = temp2;

	  
	  //copy the rest of the list
	  temp = temp -> next;

	  while(temp != nullptr)
	    {
	      temp2 = new node;
	      temp2 -> num = temp -> num;
	      temp2 -> next = nullptr;

	      tail -> next = temp2;
	      tail = temp2;
	      
	      temp = temp -> next;
	    }
	}

    }
  return *this;
}



