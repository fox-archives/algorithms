#include <array>
#include <cassert>
#include <iostream>

#include "../LinkedList/LinkedListSimple.hpp"

auto main() -> int {
  auto list = LinkedListSimple<std::string>{};
  auto item = list.getItem(0);
  std::cout << item << '\n';
}