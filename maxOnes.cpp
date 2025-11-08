#include <ctime>
#include <iostream>
#include <random>
#include <vector>

std::vector<std::vector<int>> gen_random_matrix(int m, int n) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(0, 1);

  auto number{0};
  std::vector<std::vector<int>> matrix(
      static_cast<size_t>(m), std::vector<int>(static_cast<size_t>(n)));

  for (size_t i{0}; i < static_cast<size_t>(m); i++) {
    for (size_t j{0}; j < static_cast<size_t>(n); j++) {
      number = dist(gen);
      matrix[i][j] = number;
    }
  }

  return matrix;
}

void print_matrix(std::vector<std::vector<int>> a) {
  for (auto row : a) {
    for (auto element : row) {
      std::cout << element << " ";
    }
    std::cout << "\n";
  }
}

int find_max_ones_row(std::vector<std::vector<int>> a) {
  auto rowCount{0};    // Temporary count of 1s in the current row
  auto maxOnes{0};     // Maximum count found so far
  auto maxRowIndex{0}; // Index of the row with max 1s (the return value)

  for (size_t i{0}; i < a.size(); i++) {
    rowCount = 0; // Reset count for every new row

    for (int element : a[i]) {
      if (element == 1) {
        rowCount++;
      }
    }

    if (rowCount > maxOnes) {
      maxOnes = rowCount;
      maxRowIndex = static_cast<int>(i);
    }
  }
  return maxRowIndex;
}

int find_max_ones_col(std::vector<std::vector<int>> a) {
  if (a.empty() || a[0].empty())
    return -1;

  auto m = a.size();
  auto n = a[0].size();

  auto colCount{0};
  auto maxOnes{0};
  auto maxColIndex{0};

  for (size_t j{0}; j < n; j++) {
    colCount = 0;

    for (size_t i{0}; i < m; i++) {
      if (a[i][j] == 1) {
        colCount++;
      }
    }

    if (colCount > maxOnes) {
      maxOnes = colCount;
      maxColIndex = static_cast<int>(j);
    }
  }
  return maxColIndex;
}

int main() {
  const int M = 4;
  const int N = 4;

  std::cout << "--- Random 4x4 Matrix Analysis ---\n\n";
  std::vector<std::vector<int>> matrix = gen_random_matrix(M, N);
  std::cout << "Generated Matrix:\n";
  print_matrix(matrix);
  std::cout << "\n";

  int maxRowIndex = find_max_ones_row(matrix);
  int maxColIndex = find_max_ones_col(matrix);

  std::cout << "Results:\n";
  std::cout << "First row index with the most 1s: " << maxRowIndex << "\n";
  std::cout << "First column index with the most 1s: " << maxColIndex << "\n";

  return 0;
}
