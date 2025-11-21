#include <iostream>

// TODO: Implement swap_ptr
void swap_ptr(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

// TODO: Implement swap_ref
void swap_ref(int &a, int &b) {
  int c{a};
  a = b;
  b = c;
}

int main() {
  int x{10};
  int y{20};

  std::cout << "Original: x=" << x << ", y=" << y << std::endl;

  swap_ptr(&x, &y);
  std::cout << "After swap_ptr: x=" << x << ", y=" << y << std::endl;

  swap_ref(x, y);
  std::cout << "After swap_ref: x=" << x << ", y=" << y << std::endl;

  return 0;
}
