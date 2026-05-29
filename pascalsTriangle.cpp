int pascal(int row, int col) {
  if (col == 0 || col == row) {
    return 1;
  }
  return pascal(col - 1, row - 1) + pascal(row - 1, col);
};
