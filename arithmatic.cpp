#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int sum = a + b;
  int prod = a * b;
  int quot = a / b;
  int rem = a % b;

  std::cout << a << " + " << b << " = " << sum << "\n";
  std::cout << a << " * " << b << " = " << prod << "\n";
  std::cout << a << " / " << b << " = " << quot << "\n";
  std::cout << a << " % " << b << " = " << rem << "\n";
}
