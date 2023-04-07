#include "linked_list.h"
#include <iostream>

void insertNode(ListNode *&head, ListNode *&tail, int val) {
    ListNode *newNode = new ListNode;
    newNode->val = val;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode; 
    tail = newNode;
}

ListNode* mergeTwoSortedLists(ListNode* list1, ListNode* list2){
  ListNode *dummy = new ListNode();
  ListNode *current = dummy;

  while(list1 != nullptr && list2 != nullptr){
    if(list1->val <= list2->val){
      current->next = list1;
      list1 = list1->next;
    } else {
      current->next = list2;
      list2 = list2->next;
    }
    current = current->next;
  }
  if (list1 != nullptr){
    current->next = list1;
  } else if (list2 != nullptr){
    current->next = list2;
  }

  ListNode* head = dummy->next;
  delete dummy;
  return head;
}

void reverseLinkedList(ListNode *&head){
  if (head == NULL || head->next == NULL){
    return; 
  }
  ListNode *rest = head->next;
  reverseLinkedList(rest);
  head->next->next = head;
  head->next = NULL;
  head = rest;
}

// Implements recursion
void printLinkedList(ListNode* head) {
  if (head == NULL){
    return;
  }
  std::cout << head->val << std::endl;
  printLinkedList(head->next);
}

// Implements recursion
void printLinkedListInReverse(ListNode* head) {
  if (head == NULL){
    return;
  }
  printLinkedListInReverse(head->next);
  std::cout << head->val << std::endl;
}
