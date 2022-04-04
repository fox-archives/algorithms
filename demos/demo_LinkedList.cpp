#include <iostream>

#include "Config.h"
#include "LinkedList.hpp"

auto main() -> int {
  std::cout << "Demonstrating a Linked List!" << '\n';
  std::cout << "Current version: " << VERSION << '\n';

  auto list = LinkedList<std::string>{};
  list.insert("ein");
  list.insert("zwei");
  list.insert("drei");
  list.insert("veir");

  list.print();
}