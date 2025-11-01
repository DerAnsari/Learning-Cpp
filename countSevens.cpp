#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::string, std::to_string;

int count7(int n) {
  if (n < 0) {
    n = -n;
  }

  int count{0};
  string numberStr = to_string(n);

  for (size_t i{0}; i < numberStr.length(); i++) {
    if (numberStr[i] == '7') {
      count++;
    }
  }
  return count;
}

int main() {
  int number{0};

  cout << "Enter the Number: ";
  if (!(cin >> number)) {
    cout << "Invalid input." << endl;
    return 1;
  }

  int result = count7(number);
  cout << "The number of 7s is: " << result << endl;

  return 0;
}
