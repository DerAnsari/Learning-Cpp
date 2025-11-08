#include <iostream>

int count7(int n) {
  if (n == 0) {
    return 0;
  }

  int rightmost_digit = n % 10;
  int count = (rightmost_digit == 7) ? 1 : 0;

  return count + count7(n / 10);
}

int main() {
  auto num{0};
  std::cout << "Enter number: ";
  std::cin >> num;

  std::cout << "Result: " << count7(num);
}
