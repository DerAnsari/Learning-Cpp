#include <iostream>

using std::cin, std::cout;

int main() {
  int num{0};
  cout << "Enter a positive integer: ";
  cin >> num;

  int sum{0};
  for (int count{1}; count <= num / 2; count++) {
    if (num % count == 0) {
      sum += count;
    }
  }
  if (sum == num) {
    cout << "Yes, it is a perfect number";
  } else {
    cout << "No, it is not a perfect number";
  }
}
