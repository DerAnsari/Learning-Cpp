#include <iostream>

using std::cout, std::cin;

int main() {
  int num{0}, numbers[10]{}, evenCount{0};
  for (int i{0}; i < 10; i++) {
    cin >> num;
    numbers[i] = num;
    if (num % 2 == 0) {
      evenCount++;
    }
  }
  cout << "Number of even Numbers are: " << evenCount;
  return 0;
}
