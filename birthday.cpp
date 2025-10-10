#include <cstddef>
#include <iostream>
#include <random>

int main() {
  constexpr std::size_t DAYS_IN_YEAR{365};
  bool birthday_taken[DAYS_IN_YEAR]{}; // All false initially

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 365);

  int count{0};
  bool found{false};
  while (!found) {
    int randoPerson{dist(gen)};
    if (birthday_taken[randoPerson] == false) {
      birthday_taken[randoPerson] = true;
    } else {
      found = true;
      std::cout << "People Entered: " << count++;
    }
    count++;
  }

  return 0;
}
