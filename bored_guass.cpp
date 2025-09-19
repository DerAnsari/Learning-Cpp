#include <iostream>

using std::cout, std::cin;

int main() {
  int num{0};
  cout << "Enter a positive integer";
  cin >> num;

  int count{1}, sum{0};
  while (count <= num) {
    sum += count;
    count++;
  }

  cout << "Total: " << sum;
}
