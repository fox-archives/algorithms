#include "Config.h"
#include "LinkedListSimple.hpp"

#include <iostream>

auto main() -> int {
  std::cout << "Demonstrating a Linked List!" << '\n';
  std::cout << "Current version: " << VERSION << '\n';

  auto list = LinkedListSimple<std::string>{};
  list.addEnd("ein");
  list.addEnd("zwei");
  list.addEnd("drei");
  list.addEnd("veir");

  list.print();
}