#include <iostream>
using std::cout, std::cin;

int main() {
  int n;
  cin >> n;

  int i = 0, v = 1;

  while (i <= n) {
    cout << v << " ";
    i = i + 1;
    v = v * 3;
  }
}
