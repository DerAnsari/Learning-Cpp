#include <iostream>

int gcd(int m, int n) {
  if (m == n) {
    return m;
  }

  if (m < n) {
    return gcd(m, n - m);
  }

  return gcd(m - n, n);
}

int main() {
  int m, n;
  std::cout << "Enter two positive integers (m and n): ";
  std::cin >> m >> n;

  std::cout << "GCD of " << m << " and " << n << " is " << gcd(m, n)
            << std::endl;
  return 0;
}
