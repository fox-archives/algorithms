#include <iostream>

#ifndef BAG_HPP
#define BAG_HPP

template <typename T>
class Bag {
private:
public:
  auto add(T item) -> void;
  auto isEmpty() -> bool;
  auto size() -> bool;
};

#include "../src/Bag.tpp"
#endif