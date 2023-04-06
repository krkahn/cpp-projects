#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct ListNode{
  int val;
  ListNode* next;
};

void insertNode(ListNode *&head, ListNode *&tail, int val);

void mergeTwoSortedLists(ListNode* list1, ListNode* list2);

void printLinkedList(ListNode* head);

void printLinkedListInReverse(ListNode* head);

#endif
