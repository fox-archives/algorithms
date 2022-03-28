#include <cstddef>

extern std::size_t factorial(unsigned int number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}