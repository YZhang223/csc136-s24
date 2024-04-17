#include "templateList.h"
#include <iostream>

using namespace std;

int main()
{
  linkedListType<int> myList;
  myList.insertLast(1);
  myList.insertLast(2);
  myList.insertLast(3);

  myList.print();

  linkedListType<string> yourList;
  yourList.insertLast("CSC");
  yourList.insertLast("136");
  yourList.insertLast("computer");

  yourList.print();




}
