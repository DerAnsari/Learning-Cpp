#include <cstddef>
#include <iostream>

int **create_matrix(std::size_t rows, std::size_t cols) {
  // 1. Allocate the array of int* pointers (the rows).

  int **mat = new int *[rows];

  // 2. Loop and allocate each individual row array (the columns).
  for (std::size_t i = 0; i < rows; i++) {
    mat[i] = new int[cols]{};
  }

  // 3. Return the double pointer (pointer to the array of pointers).
  return mat;
}

void delete_matrix(int **matrix, std::size_t rows) {
  // 1. Loop and delete each individual row array first.

  for (std::size_t i = 0; i < rows; i++) {
    if (matrix[i] != nullptr) {
      delete[] matrix[i];
    }
  }

  // 2. Delete the array of pointers itself (the exterior structure).
  delete[] matrix;
}

int main() {
  std::size_t rows{3};
  std::size_t cols{4};
  int **mat{create_matrix(rows, cols)};

  if (mat != nullptr) {
    // Fill matrix
    int count{1};
    for (std::size_t i{0}; i < rows; i++) {
      for (std::size_t j{0}; j < cols; j++) {
        mat[i][j] = count++;
      }
    }

    // Print matrix
    for (std::size_t i{0}; i < rows; i++) {
      for (std::size_t j{0}; j < cols; j++) {
        std::cout << mat[i][j] << '\t';
      }
      std::cout << std::endl;
    }

    delete_matrix(mat, rows);
    std::cout << "Matrix freed." << std::endl;
  }

  return 0;
}
