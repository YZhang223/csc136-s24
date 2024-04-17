#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

#include <iostream>
using namespace std;

struct node
{
  int num;
  node *next;
};

class linkedListIterator
{
 public:
  linkedListIterator();
  linkedListIterator(node* ptr);

  int operator*();
  //Function to overload the dereferencing operator *.
  //Postcondition: Returns the int contained in the node.

  linkedListIterator operator++();    
  //Overload the pre-increment operator.
  //Postcondition: The iterator is advanced to the next 
  //               node.

  bool operator==(const linkedListIterator& right) const; 
  bool operator!=(const linkedListIterator& right) const; 

 private:
  node* current;
};


#endif
