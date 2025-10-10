#include <cstddef>
#include <iostream>
#include <random>

int main() {
  constexpr std::size_t DAYS_IN_YEAR{365};

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(0, DAYS_IN_YEAR - 1);

  int sumCount{0};

  for (int i{0}; i < 100; i++) {         // run 100 experiments
    bool birthday_taken[DAYS_IN_YEAR]{}; // reset each experiment
    int count{0};
    bool found{false};

    while (!found) {
      count++; // one more person enters
      int randoPerson{dist(gen)};
      if (!birthday_taken[randoPerson]) {
        birthday_taken[randoPerson] = true;
      } else {
        found = true;
        sumCount += count; // accumulate, not overwrite
      }
    }
  }

  double avg = static_cast<double>(sumCount) / 100;
  std::cout << "Average: " << avg << "\n";

  return 0;
}
