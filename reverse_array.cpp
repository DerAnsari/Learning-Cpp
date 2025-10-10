#include <iostream>
#include <iterator>
#include <string>

using std::string, std::cout;

int main() {
  string digits[]{"zero", "one", "two",   "three", "four",
                  "five", "six", "seven", "eight", "nine"};
  int size = std::size(digits);

  for (int count = 0; count < size / 2; count++) {
    string temp = digits[size - 1 - count];
    digits[size - 1 - count] = digits[count];
    digits[count] = temp;
  }
  for (int i = 0; i < size; i++) {
    cout << digits[i] << " ";
  }
}
