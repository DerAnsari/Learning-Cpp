#include <cstddef>
#include <iostream>

using std::cout, std::cin, std::endl, std::size_t;

int main() {
  constexpr size_t SIZE{3};
  int square[SIZE][SIZE];
  bool isMagic = true;

  // Read the 3x3 matrix from standard input
  cout << "Enter the 9 integers for the 3x3 square, one by one:\n";
  for (size_t i = 0; i < SIZE; ++i) {
    for (size_t j = 0; j < SIZE; ++j) {
      if (!(cin >> square[i][j])) {
        cout << "Error reading input.\n";
        return 1;
      }
    }
  }

  // Calculate the Expected Sum (from the first row)
  int expectedSum = 0;
  for (size_t j = 0; j < SIZE; ++j) {
    expectedSum += square[0][j];
  }

  for (size_t i = 1; i < SIZE; ++i) {
    if (!isMagic)
      break;

    int currentSum = 0;
    for (size_t j = 0; j < SIZE; ++j) {
      currentSum += square[i][j];
    }

    if (currentSum != expectedSum) {
      isMagic = false;
    }
  }

  // Check Columns
  if (isMagic) {
    for (size_t j = 0; j < SIZE; ++j) {
      int currentSum = 0;
      for (size_t i = 0; i < SIZE; ++i) {
        currentSum += square[i][j];
      }

      if (currentSum != expectedSum) {
        isMagic = false;
        break;
      }
    }
  }

  // Check Primary Diagonal (Top-Left to Bottom-Right)
  if (isMagic) {
    int diag1Sum = 0;
    for (size_t i = 0; i < SIZE; ++i) {
      diag1Sum += square[i][i];
    }
    if (diag1Sum != expectedSum) {
      isMagic = false;
    }
  }

  // Check Secondary Diagonal (Top-Right to Bottom-Left)
  if (isMagic) {
    int diag2Sum = 0;
    for (size_t i = 0; i < SIZE; ++i) {
      diag2Sum += square[i][SIZE - 1 - i];
    }
    if (diag2Sum != expectedSum) {
      isMagic = false;
    }
  }

  // Print Final Result
  if (isMagic) {
    cout << "It is a Magic Number";
  } else {
    cout << "It is not a magic Number";
  }
  cout << endl;
  return 0;
}
