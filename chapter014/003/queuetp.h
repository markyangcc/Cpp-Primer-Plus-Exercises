#ifndef QUEUETP_H_
#define QUEUETP_H_

#include <iostream>

template <typename Type>
class Queuetp {
 private:
  struct Node {
    Type data;
    Node *next;
  };

  Node *head;
  Node *tail;

 public:
  Queuetp();
  Queuetp(const Queuetp<Type> &q);
  ~Queuetp();
  bool enqueue(const Type &val);
  bool dequeue(const Type &val);
  bool isempty();
  Type peek() const;
};

template <typename Type>
Queuetp<Type>::Queuetp() {
  head = nullptr;
  tail = nullptr;
}
template <typename Type>

Queuetp<Type>::Queuetp(const Queuetp<Type> &q) {
  Node *t = q.tail;
  while (t != NULL) {
    enqueue(t->data);
  }
}

template <typename Type>
Queuetp<Type>::~Queuetp() {
  while (head != nullptr) {
    Node *tempptr = head;
    head = head->next;
    head->next = nullptr;
    delete[] tempptr;
  }
}

template <typename Type>
bool Queuetp<Type>::enqueue(const Type &val) {
  Node *node = new Node;

  if (node == nullptr) {
    std::cout << "Error, no more memory aviaiable." << std::endl;
    return false;
  } else if (isempty()) {
    node->next = nullptr;
    node->data = val;
    head = node;
  } else {
    tail->next = node;
    node->next = nullptr;
    node->data = val;
    tail = node;
  }

  return true;
}

template <typename Type>
bool Queuetp<Type>::dequeue(const Type &val) {
  if (isempty()) {
    std::cout << "Error, queue empty. No element to dequeue." << std::endl;
    return false;
  } else {
    Node *tempptr = head;
    head = head->next;
    head->next = nullptr;
    delete[] tempptr;
  }
  return true;
}

template <typename Type>
bool Queuetp<Type>::isempty() {
  if (head == nullptr) {
    return true;
  } else
    return false;
}

template <typename Type>
Type Queuetp<Type>::peek() const {
  return head->data;
}

#endif
