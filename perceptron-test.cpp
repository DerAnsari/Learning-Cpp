#include <cmath>
#include <cstdlib>
#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
  int x{0}, correctCount{0};
  double t{0.0}, w{4.2}, b{1.4}, y{0.0};
  bool isCorrect{false};
  for (int i{0}; i < 10; i++) {
    cout << "Enter 10 Integer values";
    cin >> x;

    y = w * static_cast<double>(x) + b;
    t = 2 * std::pow(x, 2) - 4;

    if (std::abs(y - t) <= 1.0) {
      isCorrect = true;
      correctCount += 1;
    }

    cout << " x: " << x << " y: " << y << " t: " << t;
    if (isCorrect) {
      cout << "Correct";
    } else {
      cout << "Incorrect";
    }
    cout << endl;
    isCorrect = false;
  }

  double acuracy = static_cast<double>(correctCount) / 10 * 100;
  cout << "Overall Acuracy: " << acuracy;
}
