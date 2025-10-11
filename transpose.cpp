#include <cstddef>
#include <iostream>

using std::cout, std::endl, std::size_t;

constexpr size_t SIZE{4};

int main() {
  char originalMatrix[SIZE][SIZE]{{'A', 'B', 'C', 'D'},
                                  {'E', 'F', 'G', 'H'},
                                  {'I', 'J', 'K', 'L'},
                                  {'M', 'N', 'O', 'P'}};

  char transposedMatrix[SIZE][SIZE];

  for (size_t i{0}; i < SIZE; ++i) {
    for (size_t j{0}; j < SIZE; ++j) {
      transposedMatrix[i][j] = originalMatrix[j][i];
    }
  }

  cout << "\n--- " << "Transposed Matrix" << " (" << SIZE << "x" << SIZE
       << ") ---\n";

  for (size_t i{0}; i < SIZE; ++i) {
    for (size_t j{0}; j < SIZE; ++j) {

      cout << " " << transposedMatrix[i][j];
    }
    cout << endl; // Newline after each row
  }

  cout << "\nTranspose complete.\n";

  return 0;
}
