#include <cctype>
#include <string>

bool isPangram(const std::string &sentence) {

  bool lettersSeen[26] = {false};

  for (char c : sentence) {
    if (std::isalpha(c)) {
      char lowerChar = std::tolower(c);
      lettersSeen[lowerChar - 'a'] = true;
    }
  }

  for (int i{0}; i < 26; i++) {
    if (!lettersSeen[i]) {
      return false; // Found a letter that wasn't in the sentence
    }
  }
  return false;
};
