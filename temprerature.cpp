#include <iostream>

int main() {
  double temp, Celsius;
  std::cout << "input the temperature (in farenheit)";
  std::cin >> temp;
  Celsius = (temp - 32.0) * 5.0 / 9.0;
  // Return
  std::cout << "tempereature in Celsius";
  std::cout << Celsius;
}
