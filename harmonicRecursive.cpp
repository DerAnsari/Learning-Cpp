#include <iostream>
double harmonic_sum(int n) {
  if (n == 0) {
    return 0.0;
  }

  return (1.0 / n) + harmonic_sum(n - 1);
}

int main() {
  auto num{0};
  std::cout << "Enter Harmonic number: ";
  std::cin >> num;

  std::cout << "Result: " << harmonic_sum(num);
}
