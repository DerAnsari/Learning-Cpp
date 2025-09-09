#include <cmath>
#include <iostream>

using namespace std;

int main() {
  // first parameters
  double x1, y1;
  cout << "Input the first coordinates";
  cin >> x1 >> y1;
  // second parameters
  double x2, y2;
  cout << "Input the second coordinates";
  cin >> x2 >> y2;

  // process
  double quadratic = 0.0;
  quadratic = std::sqrt(std::pow((x1 - x2), 2) + std::pow((y1 - y2), 2));

  // result
  cout << quadratic;
  return 0;
}
