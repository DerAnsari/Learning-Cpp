#include <iostream>
#include <random>
#include <string>

using std::cout, std::cin, std::string;

int main() {
  int num{0};
  cout << "Enter your guess: ";
  cin >> num;

  // Generating random number
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  int guessNum{dist(gen)};

  while (guessNum != num) {
    string hint{" "};

    if (num < guessNum) {
      hint = "Too low";
    } else {
      hint = "Too High";
    }

    cout << "Incorrect Guess, Try agian ";
    cout << "Hint: " << hint;
    cin >> num;
  }
  cout << "Congragulations you did it ";
  return 0;
}
