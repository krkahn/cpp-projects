#include "linked_list.h"
#include <iostream>

int main(){
  // Create first node
    ListNode *list1 = nullptr;
    ListNode *tail = nullptr;
    insertNode(list1, tail, 6);
    insertNode(list1, tail, 9);
    insertNode(list1, tail, 4);
    insertNode(list1, tail, 2);
    // print the linked list
    ListNode *curr = list1;

  printLinkedList(list1);
  std::cout << "\nreversed:\n" << std::endl;
  printLinkedListInReverse(list1);
 return 0;
}

