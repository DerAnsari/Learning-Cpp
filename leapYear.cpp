#include <iostream>
using namespace std;

int main() {
  int year;
  cin >> year;
  bool isLeapYear;

  // first condition to check
  isLeapYear = (year % 4 == 0) && (year % 100 != 0);

  // second condition to check since cant use conditional statements
  isLeapYear = isLeapYear || (year % 400 == 0);

  cout << boolalpha << isLeapYear;
  return 0;
}
