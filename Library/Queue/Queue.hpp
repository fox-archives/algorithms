#include <cstddef>

#ifndef QUEUE_HPP
#define QUEUE_HPP

template <typename List, typename T>
class Queue {
private:
  List<T> list;

public:
  auto queue(T item) -> T &;
  auto enqueue(T item) -> T &;
  auto isEmpty() -> bool;
  auto size() -> std::size_t;
};

#include "./Queue.tpp"
#endif