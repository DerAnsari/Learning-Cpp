#include <iostream>

long long factorial(long long n) {
  if (n < 0) {
    return 0;
  }

  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main() {
  long long n{0}, result{0};
  std::cout << "Enter the number for which you wish to find factorial: ";
  if (!(std::cin >> n)) {
    std::cerr << "Invalid input received." << std::endl;
    return 1;
  }

  if (n < 0) {
    std::cout << "Error: Factorial is only defined for non-negative numbers."
              << std::endl;
    return 1;
  }

  result = factorial(n);

  if (n > 20 && result < 0) {
    std::cout << n << "! is too large to represent using 'long long'."
              << std::endl;
  } else {
    std::cout << n << "! = " << result << std::endl;
  }

  return 0;
}
