#include <cmath>
#include <iostream>

int main() {
  double b, c;
  std::cin >> b >> c; // input coefficients

  // Calculate roots of x*x + b*x + c.
  double discriminant = b * b - 4.0 * c;
  double d = std::sqrt(discriminant);
  double root1 = (-b + d) / 2.0;
  double root2 = (-b - d) / 2.0;

  // Print them out.
  std::cout << root1 << " " << root2 << std::endl;
}
