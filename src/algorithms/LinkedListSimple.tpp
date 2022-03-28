#include <cstddef>
#include <iostream>
#include <stdexcept>

template <typename T>
LinkedListSimple<T>::~LinkedListSimple() {
  clear();
}

template <typename T>
auto LinkedListSimple<T>::clear() -> void {
  Node *current_node = m_head;
  while (current_node != nullptr) {
    auto *temp = current_node;
    current_node = current_node->next;
    delete temp;
  }
}

template <typename T>
auto LinkedListSimple<T>::clone() -> LinkedListSimple<T> {
  auto list = LinkedListSimple();
  Node *current_node = m_head;
  while (current_node != nullptr) {
      
    current_node = current_node->next;
  }
}

template <typename T>
auto LinkedListSimple<T>::addStart(T item) -> T & {
  Node *new_node = new Node{.item = item, .next = nullptr};

  new_node->next = m_head;
  m_head = new_node;
  return *m_head;
}

template <typename T>
auto LinkedListSimple<T>::addEnd(T item) -> T & {
  Node *new_node = new Node{.item = item, .next = nullptr};

  if (m_head == nullptr) {
    m_head = new_node;
    return new_node->item;
  }

  Node *current_node = m_head;
  for (; current_node->next != nullptr; current_node = current_node->next)
    ;

  current_node->next = new_node;
  return new_node->item;
}

template <typename T>
auto LinkedListSimple<T>::getItem(std::size_t i) -> T {
  if (m_head == nullptr)
    throw std::out_of_range("LinkedList::getItem: Out of range");

  Node *current_node = m_head;
  std::size_t counter = 0;
  for (; current_node != nullptr && counter < i; current_node = current_node->next, ++counter)
    ;

  if (counter != i) {
    throw std::out_of_range("LinkedList::getItem: Out of range");
  }
  return current_node->item;
}

template <typename T>
auto LinkedListSimple<T>::print() -> void {
  Node *current_node = m_head;

  for (std::size_t i = 0; current_node != nullptr; ++i, current_node = current_node->next) {
    std::cout << i << ": " << current_node << '\n';
  }
}