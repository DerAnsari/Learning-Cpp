#include <iostream>

using std::cout, std::cin, std::endl;

int main() {
  int num{0};
  cout << "Enter the number for pyramid: ";
  cin >> num;

  for (int row{1}; row <= num; row++) {

    for (int space = 1; space <= num - row; space++) {
      cout << "  ";
    }

    for (int col{1}; col <= row; col++) {
      cout << col << " ";
    }

    for (int reverseCol = row - 1; reverseCol >= 1; reverseCol--) {
      cout << reverseCol << " ";
    }

    cout << endl;
  }
}
