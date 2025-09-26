#include <iostream>
#include <string>

using std::cout, std::cin, std::string;

int main() {

  int num;
  cout << "Enter The Ammount in figures: ";
  cin >> num;
  while (num < -999999 || num > 999999) {
    cout << "Wrong Ammount must be in range -999999 <= n <= 999999: ";
    cin >> num;
  }

  string numWords{""};
  bool isZero{false};

  if (num < 0) {
    cout << "Negative ";
    num = -num;
  } else if (num == 0) {
    numWords = "Zero";
    cout << numWords;
    return 0;
  }

  int sixthDigit = num / 100000;
  int remainingFive = num % 100000;

  int fifthDigit = remainingFive / 10000;
  int remainingFour = remainingFive % 10000;

  int forthDigit = remainingFour / 1000;
  int remainingThree = remainingFour % 1000;

  int thirdDigit = remainingThree / 100;
  int remainingTwo = remainingThree % 100;

  int secondDigit = remainingTwo / 10;
  int lastDigit = remainingTwo % 10;

  if (sixthDigit != 0) {
    if (sixthDigit == 1)
      cout << "one hundred ";
    else if (sixthDigit == 2)
      cout << "two hundred ";
    else if (sixthDigit == 3)
      cout << "three hundred ";
    else if (sixthDigit == 4)
      cout << "four hundred ";
    else if (sixthDigit == 5)
      cout << "five hundred ";
    else if (sixthDigit == 6)
      cout << "six hundred ";
    else if (sixthDigit == 7)
      cout << "seven hundred ";
    else if (sixthDigit == 8)
      cout << "eight hundred ";
    else if (sixthDigit == 9)
      cout << "nine hundred ";
  }

  if (fifthDigit != 0 || forthDigit != 0) {
    if (fifthDigit == 1) {
      if (forthDigit == 0)
        cout << "ten thousand ";
      else if (forthDigit == 1)
        cout << "eleven thousand ";
      else if (forthDigit == 2)
        cout << "twelve thousand ";
      else if (forthDigit == 3)
        cout << "thirteen thousand ";
      else if (forthDigit == 4)
        cout << "fourteen thousand ";
      else if (forthDigit == 5)
        cout << "fifteen thousand ";
      else if (forthDigit == 6)
        cout << "sixteen thousand ";
      else if (forthDigit == 7)
        cout << "seventeen thousand ";
      else if (forthDigit == 8)
        cout << "eighteen thousand ";
      else if (forthDigit == 9)
        cout << "nineteen thousand ";
    } else {
      if (fifthDigit == 2)
        cout << "twenty ";
      else if (fifthDigit == 3)
        cout << "thirty ";
      else if (fifthDigit == 4)
        cout << "forty ";
      else if (fifthDigit == 5)
        cout << "fifty ";
      else if (fifthDigit == 6)
        cout << "sixty ";
      else if (fifthDigit == 7)
        cout << "seventy ";
      else if (fifthDigit == 8)
        cout << "eighty ";
      else if (fifthDigit == 9)
        cout << "ninety ";

      if (forthDigit != 0) {
        if (forthDigit == 1)
          cout << "one thousand ";
        else if (forthDigit == 2)
          cout << "two thousand ";
        else if (forthDigit == 3)
          cout << "three thousand ";
        else if (forthDigit == 4)
          cout << "four thousand ";
        else if (forthDigit == 5)
          cout << "five thousand ";
        else if (forthDigit == 6)
          cout << "six thousand ";
        else if (forthDigit == 7)
          cout << "seven thousand ";
        else if (forthDigit == 8)
          cout << "eight thousand ";
        else if (forthDigit == 9)
          cout << "nine thousand ";
      } else {
        cout << "thousand ";
      }
    }
  }

  if (thirdDigit != 0) {
    if (thirdDigit == 1)
      cout << "one hundred ";
    else if (thirdDigit == 2)
      cout << "two hundred ";
    else if (thirdDigit == 3)
      cout << "three hundred ";
    else if (thirdDigit == 4)
      cout << "four hundred ";
    else if (thirdDigit == 5)
      cout << "five hundred ";
    else if (thirdDigit == 6)
      cout << "six hundred ";
    else if (thirdDigit == 7)
      cout << "seven hundred ";
    else if (thirdDigit == 8)
      cout << "eight hundred ";
    else if (thirdDigit == 9)
      cout << "nine hundred ";
  }

  if (secondDigit != 0) {
    if (secondDigit == 1) {
      if (lastDigit == 0)
        cout << "ten";
      else if (lastDigit == 1)
        cout << "eleven";
      else if (lastDigit == 2)
        cout << "twelve";
      else if (lastDigit == 3)
        cout << "thirteen";
      else if (lastDigit == 4)
        cout << "fourteen";
      else if (lastDigit == 5)
        cout << "fifteen";
      else if (lastDigit == 6)
        cout << "sixteen";
      else if (lastDigit == 7)
        cout << "seventeen";
      else if (lastDigit == 8)
        cout << "eighteen";
      else if (lastDigit == 9)
        cout << "nineteen";
    } else {
      if (secondDigit == 2)
        cout << "twenty ";
      else if (secondDigit == 3)
        cout << "thirty ";
      else if (secondDigit == 4)
        cout << "forty ";
      else if (secondDigit == 5)
        cout << "fifty ";
      else if (secondDigit == 6)
        cout << "sixty ";
      else if (secondDigit == 7)
        cout << "seventy ";
      else if (secondDigit == 8)
        cout << "eighty ";
      else if (secondDigit == 9)
        cout << "ninety ";

      if (lastDigit != 0) {
        if (lastDigit == 1)
          cout << "one";
        else if (lastDigit == 2)
          cout << "two";
        else if (lastDigit == 3)
          cout << "three";
        else if (lastDigit == 4)
          cout << "four";
        else if (lastDigit == 5)
          cout << "five";
        else if (lastDigit == 6)
          cout << "six";
        else if (lastDigit == 7)
          cout << "seven";
        else if (lastDigit == 8)
          cout << "eight";
        else if (lastDigit == 9)
          cout << "nine";
      }
    }
  } else if (lastDigit != 0) {
    if (lastDigit == 1)
      cout << "one";
    else if (lastDigit == 2)
      cout << "two";
    else if (lastDigit == 3)
      cout << "three";
    else if (lastDigit == 4)
      cout << "four";
    else if (lastDigit == 5)
      cout << "five";
    else if (lastDigit == 6)
      cout << "six";
    else if (lastDigit == 7)
      cout << "seven";
    else if (lastDigit == 8)
      cout << "eight";
    else if (lastDigit == 9)
      cout << "nine";
  }

  cout << "\n";
}
