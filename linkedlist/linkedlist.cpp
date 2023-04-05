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

