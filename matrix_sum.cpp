#include <cstddef>
#include <iostream>

using std::cout, std::cin, std::size_t;

int main() {

  constexpr size_t Rows{4};
  constexpr size_t Cols{3};

  int sumMatrix[Rows][Cols];

  cout << "Enter: " << Rows * Cols << "Integer: ";
  int sum{0};

  for (size_t i{0}; i < Rows; i++) {
    for (size_t j{0}; j < Cols; j++) {
      cin >> sumMatrix[i][j];
      sum += sumMatrix[i][j];
    }
  }
  cout << "Total of the integers is: " << sum;
  return 0;
}
