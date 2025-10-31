#include <iostream>
using std::cout;

int main() {

  double w{0.0}, b{0.0}, x{3.0}, y{0.0}, target{14.0}, learningRate{0.01},
      error{0.0};

  for (int i{0}; i < 1000; i++) {

    y = w * x + b;
    error = target - y;

    w = w + learningRate * error * x;
    b = b + learningRate * error;

    if (i % 100 == 0 || i == 0) {
      cout << "Step " << i << ": prediction = " << y << ", error = " << error
           << "\n";
    }
  }

  cout << "Final prediction at x = 3: " << y << "\n"
       << "Target Values: " << target << "\n"
       << "Final w: " << w << ", b = " << b;

  return 0;
}
