#include <iostream>
#include <string>
bool is_palindrome(std::string text) {
  if (text.length() <= 1) {
    return true;
  }

  char first = static_cast<char>(std::tolower(text[0]));
  char last = static_cast<char>(std::tolower(text[text.length() - 1]));

  if (first != last) {
    return false;
  }

  return is_palindrome(text.substr(1, text.length() - 2));
}

int main() {
  std::string word{""};
  std::cout << "Enter the word to check";
  std::cin >> word;
  bool result = is_palindrome(word);
  std::cout << (result ? "It is a Palindrome" : "It is not a palindrome");
}
