#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct ListNode{
  int val;
  ListNode* next;
};

void insertNode(ListNode *&head, ListNode *&tail, int val);

void reverseLinkedList(ListNode *&head);

void sortLinkedList(ListNode *&head);

ListNode* mergeTwoSortedLists(ListNode* list1, ListNode* list2);

void printLinkedList(ListNode* head);

void printLinkedListInReverse(ListNode* head);

#endif
