#include <iostream>

struct ListNode{
  int val;
  ListNode* next;
};

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
