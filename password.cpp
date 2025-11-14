#include <cctype>
#include <iostream>
#include <string>

bool is_valid_password(const std::string &password) {
  bool is_valid = true;

  if (password.size() < 10) {
    std::cout << "Password must be at least 10 characters long.\n";
    is_valid = false;
  }

  int digit_count = 0;
  int letter_count = 0;
  bool has_invalid_char = false;

  for (char ch : password) {
    unsigned char uch = static_cast<unsigned char>(ch);

    if (std::isdigit(uch)) {
      ++digit_count;
    } else if (std::isalpha(uch)) {
      ++letter_count;
    } else {
      has_invalid_char = true;
    }
  }

  if (has_invalid_char) {
    std::cout << "Password may contain only letters and digits (no spaces or "
                 "symbols).\n";
    is_valid = false;
  }

  else if (digit_count < 2) {
    std::cout << "Password must contain at least two digits.\n";
    is_valid = false;
  }

  if (letter_count < 1) {
    std::cout << "Password must contain at least one letter.\n";
    is_valid = false;
  }

  if (is_valid) {
    std::cout << "Password is valid.\n";
  }

  return is_valid;
}

int main() {
  std::string pwd;
  std::cout << "Enter password: ";
  std::getline(std::cin, pwd);

  is_valid_password(pwd);
}
