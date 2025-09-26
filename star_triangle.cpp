#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
  int num{0};
  cout << "Enter the number for square";
  cin >> num;

  for (int row{1}; row <= num; row++) {
    for (int col{1}; col <= row; col++) {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}
