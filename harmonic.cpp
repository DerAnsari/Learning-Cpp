#include <iostream>

using std::cout, std::cin;

int main() {
  int num{0};
  cout << "Enter the range number";
  cin >> num;

  int count{1};
  double fraction{0.0}, sum{0.0};
  while (count <= num) {
    fraction = 1.00 / count;
    sum += fraction;
    count++;
  }

  cout << "Harmonic Number" << sum;
}
