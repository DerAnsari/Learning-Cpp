#include <iomanip>
#include <iostream>
#include <random>
using std::cin, std::cout, std::endl;

int main() {
  constexpr int SIDES = 6;
  constexpr int MAXDICE = 100;
  constexpr int MAXPOSSIBLESUM = MAXDICE * SIDES;
  constexpr int ARRAYSIZE = MAXPOSSIBLESUM + 1;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 6);

  // Taking the Inputs
  int d{0}, n{0};
  cout << "Enter the number of fair six-sided dice: ";
  cin >> d;
  while (d < 0 || d > 100) {
    cout << "Invalid number, must be within the range of 0 and 100";
    cin >> d;
  }
  cout << "Enter the number of times said dices should roll: ";
  cin >> n;

  // declating the tabular list
  int rolList[ARRAYSIZE]{};
  int minSum = d * 1;
  int maxSum = d * SIDES;

  // Folling the dices and storing
  for (int i{0}; i < n; i++) {

    int rols{0};
    for (int j{0}; j < d; j++) {
      rols += dist(gen);
    }

    rolList[rols]++;
  }

  // Presenting the Data
  cout << "\n--- Dice Roll Histogram ---\n";
  cout << "Sum \t| Chart\n";
  for (int k{minSum}; k <= maxSum; k++) {
    // Output the sum (k) and the count of that sum (rolList[k])
    cout << std::setw(3) << k << ": ";

    for (int l{0}; l < rolList[k]; l++) {
      cout << "*";
    }
    cout << endl;
  }
}
