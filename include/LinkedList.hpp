#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template <typename T>
class LinkedList {
private:
  struct Node {
    T item;
    Node *next;
  };
  Node *m_head = nullptr;

public:
  ~LinkedList();
  auto clear() -> void;
  auto insert(T item) -> void;
  auto append(T item) -> void;
  auto remove() -> void;
  auto print() -> void;
};

#include "../src/LinkedList.tpp"
#endif