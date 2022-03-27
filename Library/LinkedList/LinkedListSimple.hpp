#include <cstddef>

#ifndef LINKED_LIST_SIMPLE_HPP
#define LINKED_LIST_SIMPLE_HPP

template <typename T>
class LinkedListSimple {
private:
  struct Node {
    T item;
    Node *next;
  };
  Node *m_head = nullptr;

public:
  auto addStart(T item) -> T &;
  auto addEnd(T item) -> T &;
  auto getItem(std::size_t i) -> T;
};

#include "./LinkedListSimple.tpp"
#endif