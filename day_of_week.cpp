#include <iostream>

using namespace std;

int main() {
  int month, day, year;
  cout << "enter the month(month from 1 - 11)\n";
  cin >> month;
  cout << "Enter the day\n";
  cin >> day;
  cout << "Enter the year\n";
  cin >> year;

  int calcYear = year - (14 - month) / 12;
  int mysteryX =
      calcYear + (calcYear / 4) - (calcYear / 100) + (calcYear / 400);
  int calcMonth = month + 12 * (14 - month / 12) - 2;
  int calcDay = (day + mysteryX + (31 * calcMonth / 12)) % 7;

  cout << "the day would fall on \n" << calcDay;
}
