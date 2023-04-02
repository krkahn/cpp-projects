#include <iostream>

struct Node{
  int data;
  Node* next;
};

// Implements recursion
void printLinkedList(Node* head) {
  if (head == NULL){
    return;
  }
  std::cout << head->data << std::endl;
  printLinkedList(head->next);
}

// Implements recursion
void printLinkedListInReverse(Node* head) {
  if (head == NULL){
    return;
  }
  printLinkedListInReverse(head->next);
  std::cout << head->data << std::endl;
}

int main(){
  // Create first node
  Node* head = new Node;
  head->data = 1;
  head->next = NULL;

  // Add more nodes
  Node* second = new Node;
  second->data = 69;
  second->next = NULL;
  head->next = second;
  
  Node* third = new Node;
  third->data = 420;
  third->next = NULL;
  second->next = third;

  printLinkedList(head);
  printLinkedListInReverse(head);
 return 0;
}
