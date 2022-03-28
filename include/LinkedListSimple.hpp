#include <array>
#include <cstddef>

#ifndef LINKED_LIST_SIMPLE_H
#define LINKED_LIST_SIMPLE_H

template <typename T>
class LinkedListSimple {
private:
  struct Node {
    T item;
    Node *next;
  };
  Node *m_head = nullptr;

public:
  ~LinkedListSimple();

  // all / nothing
  auto clear() -> void;
  auto clone() -> LinkedListSimple<T>;

  // write: add
  auto addStart(T item) -> T &;
  auto addEnd(T item) -> T &;
  auto add(T item) -> T &;
  auto add(std::size_t i, T item) -> T &;
  // auto addAllStart(std::array<T> items);
  // auto addAllEnd(std::array<T> items);
  // auto add(std::array<T> items);
  // auto add(std::size_t i, std::array<T> items);

  // write: set
  auto set(std::size_t i, T item) -> T &;
  // auto set(std::size_t i, std::aray<T> items) -> T&;

  // write: remove
  auto removeStart() -> T &;
  auto removeEnd() -> T &;
  auto remove() -> T &;
  auto remove(std::size_t i) -> T &;
  auto removeStart(T item) -> T &;
  auto removeEnd(T item) -> T &;
  auto remove(T item) -> T &;

  // read
  auto getStart() -> T;
  auto getEnd() -> T;
  auto get(std::size_t i) -> T;
  auto getIndexOf(T item) -> std::size_t;
  auto getLastIndexOf(T item) -> std::size_t;
  auto contains(T item) -> bool;
  auto print() -> void;
};

#include "../src/algorithms/LinkedListSimple.tpp"
#endif // LINKED_LIST_SIMPLE_H