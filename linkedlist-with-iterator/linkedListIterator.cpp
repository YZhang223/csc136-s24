#include "linkedListIterator.h"
#include <iostream>

using namespace std;

linkedListIterator::linkedListIterator()
{
  current = nullptr;
}

linkedListIterator::linkedListIterator(node* ptr)
{
  current = ptr;
}

int linkedListIterator::operator*()
{
  return current -> num;
}

linkedListIterator linkedListIterator::operator++()
{
  current = current -> next;
  return *this;
}

bool linkedListIterator::operator==(const linkedListIterator& right) const
{
  return (current == right.current);
}

bool linkedListIterator::operator!=(const linkedListIterator& right) const
{
  return (current != right.current);
}
