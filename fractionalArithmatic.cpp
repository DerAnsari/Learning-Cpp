#include <iostream>

using namespace std;

int main() {
  int num1, den1, num2, den2;
  char op;

  cout << "Enter numerator and denominator of first fraction: ";
  cin >> num1 >> den1;

  cout << "Enter numerator and denominator of second fraction: ";
  cin >> num2 >> den2;

  cout << "Choose operation (+, -, *, /): ";
  cin >> op;

  int resultNum = 0; // numerator of result
  int resultDen = 1; // denominator of result

  if (op == '+') {
    resultNum = num1 * den2 + num2 * den1;
    resultDen = den1 * den2;
  } else if (op == '-') {
    resultNum = num1 * den2 - num2 * den1;
    resultDen = den1 * den2;
  } else if (op == '*') {
    resultNum = num1 * num2;
    resultDen = den1 * den2;
  } else if (op == '/') {
    resultNum = num1 * den2;
    resultDen = den1 * num2;
  } else {
    cout << "Invalid operator\n";
    return 0;
  }

  int a = resultNum;
  int b = resultDen;

  if (a < 0) {
    a = -a;
  }
  if (b < 0) {
    b = -b;
  }

  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  int GlobalCommondenominator = a;

  resultNum = resultNum / GlobalCommondenominator;
  resultDen = resultDen / GlobalCommondenominator;

  cout << "Result: " << resultNum << "/" << resultDen << endl;

  return 0;
}
