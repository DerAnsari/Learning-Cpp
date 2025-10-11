#include <cstddef>
#include <iostream>

using std::cout, std::size_t, std::endl;

int main() {

  constexpr size_t Rows{4};
  constexpr size_t Cols{4};

  int colMatrix[Rows][Cols]{
      {12, 7, 9, 6}, {4, 18, 3, 11}, {15, 5, 2, 10}, {8, 13, 14, 1}};
  int max{0};

  for (size_t i{0}; i < Cols; i++) {
    cout << i << endl;
    for (size_t j{0}; j < Rows; j++) {
      cout << j << endl;
      max = (colMatrix[j][i] > max) ? colMatrix[j][i] : max;
    }
    cout << "Column:" << Cols << ": " << max << endl;
    max = 0;
  }
  return 0;
}
