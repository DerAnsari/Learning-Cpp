#include <iostream>
#include <string>

using std::string, std::cout;

struct Complex {
  double re, im;
};

Complex add(const Complex &a, const Complex &b) {
  double re = a.re + b.re;
  double im = a.im + b.im;
  Complex c = {re, im};
  return c;
}

string to_string(const Complex &c) {
  return std::to_string(c.re) + "+" + std::to_string(c.im) + "i";
}

int main() {
  Complex a{2.5, 1};
  Complex b{1, 2};
  Complex c = add(a, b);

  cout << to_string(a) << to_string(b) << to_string(c);
}
