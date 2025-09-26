#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
  int num{0};
  cout << "Enter the number for square";
  cin >> num;

  for (int row{0}; row < num; row++) {
    for (int col{0}; col < num; col++) {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}
