#include <cmath>
#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
  constexpr int W = 80;
  constexpr int H = 20;
  constexpr int GRID_W = W + 1;
  constexpr int GRID_H = H + 1;
  constexpr double Y_MIN = -1.0;
  constexpr double Y_MAX = 1.0;

  // Inititalizing the List
  char grid[GRID_H][GRID_W];
  for (int i = 0; i < GRID_H; ++i) {
    for (int j = 0; j < GRID_W; ++j) {
      grid[i][j] = ' ';
    }
  }
  int x_axis_row = H / 2;
  int y_axis_col = W / 2;

  for (int j = 0; j < GRID_W; ++j) {
    grid[x_axis_row][j] = '-';
  }

  for (int i = 0; i < GRID_H; ++i) {
    grid[i][y_axis_col] = '|';
  }

  // Mark the origin (optional, but clean)
  grid[x_axis_row][y_axis_col] = '+';

  double lowerBound{0}, upperBound{0};
  cout << "Enter the LowerBound for the range: ";
  cin >> lowerBound;
  cout << "Enter the upperBound for the range";
  cin >> upperBound;

  double range = upperBound - lowerBound;

  for (int k{0}; k < GRID_W; k++) {
    double continiousX = lowerBound + k * (range / W);
    double continiousY = std::sin(continiousX);

    double normalizedY =
        (continiousY - Y_MIN) / (Y_MAX - Y_MIN); // (sin(x)+1)/2

    // 2. Map to the height range [0, H]
    int h_grid = static_cast<int>(normalizedY * H);

    int plotRow = H - h_grid;
    if (plotRow >= 0 && plotRow < GRID_H) {
      grid[plotRow][k] = '*';
    }
  }

  for (int i = 0; i < GRID_H; ++i) {
    for (int j = 0; j < GRID_W; ++j) {
      cout << grid[i][j];
    }
    cout << endl;
  }
}
