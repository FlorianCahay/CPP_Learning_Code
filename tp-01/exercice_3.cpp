#include <iostream>

int add(int a, int b) {
  return a + b;
}

void add_to(int a, int b) {
  a += b;
}

void another_add_to(int* a, int b) {
  *a += b;
}

int main() {
  const int x{10};
  std::cout << x << std::endl;
  int y = add(x, x);
  std::cout << y << std::endl;
  another_add_to(&y, y);
  std::cout << y << std::endl;
  add_to(y, 2);
  std::cout << y << std::endl;
  
  return 0;
}