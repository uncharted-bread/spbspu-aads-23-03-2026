#include <iostream>
#include <iomanip>
#include "vector-top-it.hpp"
bool testDefaultVector()
{
  using topit::Vector;
  Vector<int> v;
  return v.isEmpty();
}

int main()
{
  using test_t = bool(*)();
  bool (*tests[])() = {
    testDefaultVector
  };
  size_t testCount = sizeof(tests) / sizeof(test_t);
  for (size_t i = 0; i < testCount; ++i)
  {
    std::cout << tests[i]() << ": " << i << "\n";
  }
}
