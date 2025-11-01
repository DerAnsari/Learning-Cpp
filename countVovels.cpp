#include <iostream>
#include <string>
using std::string, std::cin, std::cout;

int count_vowels(string s = "") {

  int count{0};

  for (size_t i{0}; i < s.length(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'o') {
      count++;
    }
  }
  return count;
}

int main() {
  string word{""};
  cout << "Enter the word to search: ";
  cin >> word;

  int result = count_vowels(word);
  cout << "Vowels found: " << result << " times";
  return 0;
}
