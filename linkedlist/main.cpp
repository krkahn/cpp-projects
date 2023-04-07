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
    
    ListNode *list2 = nullptr;
    ListNode *tail2 = nullptr;
    insertNode(list2, tail2, 1);
    insertNode(list2, tail2, 3);
    insertNode(list2, tail2, 11);

    printLinkedList(list1);
    std::cout << std::endl;
    printLinkedList(list2);
    std::cout << "\nCombined:\n" << std::endl;
    //printLinkedListInReverse(list1);
    
    ListNode *combinedList = nullptr;
    ListNode *combinedListTail = nullptr;
    combinedList = mergeTwoSortedLists(list1, list2);
    printLinkedList(combinedList);

    reverseLinkedList(combinedList);
    printLinkedList(combinedList);

  return 0;
}

