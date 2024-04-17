#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct node
{
  int num;
  node *next;
};

class linkedList
{
 public:
  linkedList();
  linkedList(const linkedList& other);
  ~linkedList();

  const linkedList& operator=(const linkedList&);
  void insertAtEnd(int x);
  void print() const;

  void insertInFront(int x);
  
  void deleteNode(int x);
  //delete the first occurrence of x in the list
  //if x is not in the list, do nothing
  
  void destroyList();

  int search(int x);
  // return the position of the first occurrence of x in the list
  // the position starts from 1 
  // return -1 if x is not found
  
  
  
 private:
  node *head;
  node *tail;
  int count;



};



#endif
