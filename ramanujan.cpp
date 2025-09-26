#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
  int num{0};
  cout << "enter the number: ";
  cin >> num;

  for (int a{1}; a <= num; a++) {
    for (int b{a + 1}; b <= num; b++) {
      for (int c{1}; c <= num; c++) {
        for (int d{c + 1}; d <= num; d++) {
          int first = a * a * a + b * b * b;
          int second = c * c * c + d * d * d;
          if (first == second && first <= num) {
            cout << first << " = " << a << "^3 + " << b << "^3 = " << c
                 << "^3 + " << d << "^3" << endl;
          }
        }
      }
    }
  }

  return 0;
}
