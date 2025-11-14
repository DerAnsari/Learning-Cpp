#include <iostream>

int fibonacci(int n) {

  if (n == 0) {
    return 0;
  }

  if (n == 1 || n == 2) {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  std::cout << "Enter a positive integer: ";
  int n;
  std::cin >> n;

  if (n < 0) {
    std::cout << "INVALID INPUT\n";
    return 0;
  }

  std::cout << fibonacci(n) << '\n';
  return 0;
}
