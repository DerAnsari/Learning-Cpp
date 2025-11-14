#include <iostream>

void write_chars(int n) {
  if (n < 1) {
    std::cout << "Error: n must be at least 1" << std::endl;
    return;
  }

  if (n == 1) {
    std::cout << "*";
    return;
  }

  if (n == 2) {
    std::cout << "**";
    return;
  }

  std::cout << "<";
  write_chars(n - 2);
  std::cout << ">";
}

int main() {
  write_chars(7);
  std::cout << std::endl;
  return 0;
}
