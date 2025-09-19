#include <cmath>
#include <iostream>
#include <string>

using std::cin, std::cout, std::string;

int main() {
  double a, b, c;
  cout << "Enter the coefficients";
  cin >> a >> b >> c;

  string state{""};
  double discriminant = pow(b, 2) - 4.0 * (a * c);
  if (discriminant > 0) {
    state = "Two real roots";
  } else if (discriminant < 0) {
    state = "No real roots";
  } else {
    state = "One real root";
  }

  cout << state;
}
