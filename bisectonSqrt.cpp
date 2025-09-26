#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
  double num;
  cout << "Enter the number you wish to find the root of: ";
  cin >> num;

  double a{0}, b{0};

  // Step 1
  if (num < 1) {
    b = 1;
  } else {
    b = num;
  }

  // Step 2
  double midPoint = (a + b) / 2;

  // Step 3
  while ((midPoint * midPoint - num > 0.01) ||
         (num - midPoint * midPoint > 0.01)) {
    if (midPoint * midPoint > num) {
      b = midPoint;
    } else {
      a = midPoint;
    }
    midPoint = (a + b) / 2;
  }

  // Conclusion
  cout << "Square root of " << num << " is approximately " << midPoint << endl;
}
