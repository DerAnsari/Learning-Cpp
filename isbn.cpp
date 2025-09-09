#include <iostream>

using namespace std;

int main() {
  long num;
  cout << "Enter the 9 digits: \n";
  cin >> num;

  int d2 = num % 10;
  int d3 = (num / 10) % 10;
  int d4 = (num / 100) % 10;
  int d5 = (num / 1000) % 10;
  int d6 = (num / 10000) % 10;
  int d7 = (num / 100000) % 10;
  int d8 = (num / 1000000) % 10;
  int d9 = (num / 10000000) % 10;
  int d10 = (num / 100000000) % 10;

  int sum = 10 * d10 + 9 * d9 + 8 * d8 + 7 * d7 + 6 * d6 + 5 * d5 + 4 * d4 +
            3 * d3 + 2 * d2;

  int d1 = 11 - (sum % 11);
  d1 = (d1 == 11 ? 0 : d1);

  cout << "The full ISBN is: ";
  cout << d10 << d9 << d8 << d7 << d6 << d5 << d4 << d3 << d2;
  cout << (d1 == 10 ? 'X' : '0' + d1);

  cout << endl;
  return 0;
}
