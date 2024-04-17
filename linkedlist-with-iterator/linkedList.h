#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "linkedListIterator.h"
using namespace std;


class linkedList
{
 public:

  //default constructor
  linkedList();

  //copy constructor
  linkedList(const linkedList& other);

  //destructor
  ~linkedList();

  //overload the assignment operator
  const linkedList& operator=(const linkedList&);

  //insertion 
  void insertAtEnd(int x);
  void insertInFront(int x);

  // return the position of the first occurrence of x in the list
  // the position starts from 1 
  // return -1 if x is not found
  int search(int x);  

  //print
  void print() const;

  //deallocate the list
  //to be called in the destructor and the assignment operator
  void destroyList();

  //return an iterator at the beginning of the list
  linkedListIterator begin();

  //return an iterator at the end of the list
  linkedListIterator end();
  
  
 private:
  node *head;
  node *tail;
  int count;
};

#endif
