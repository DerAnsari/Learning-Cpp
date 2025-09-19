#include <iostream>

using std::cout, std::cin;

int main() {
  int num{0};
  cout << "Enter the integer";
  cin >> num;

  if (num > 0) {
    cout << "Positive";
  } else if (num < 0) {
    cout << "Negative";
  } else {
    cout << "Neutral";
  }

  return 0;
}
