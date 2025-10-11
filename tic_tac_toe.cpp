#include <cstddef>
#include <iostream>

using std::cout, std::endl, std::size_t;

int main() {
  constexpr size_t SIZE{3};

  char board[SIZE][SIZE]{{'X', 'O', '.'}, {'.', 'X', 'O'}, {'O', '.', 'X'}};

  char winner = '\0';

  cout << "--- Tic-Tac-Toe Board State ---\n";
  for (size_t i = 0; i < SIZE; ++i) {
    for (size_t j = 0; j < SIZE; ++j) {
      cout << board[i][j] << (j < SIZE - 1 ? ' ' : ' ');
    }
    cout << endl;
  }
  cout << "-------------------------------\n\n";

  //  Check Rows (Horizontal Wins)
  for (size_t i = 0; i < SIZE; ++i) {
    if (winner != '\0')
      break;

    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
        board[i][0] != '.') {
      winner = board[i][0];
    }
  }

  // Check Columns (Vertical Wins)
  if (winner == '\0') {
    for (size_t j = 0; j < SIZE; ++j) {
      if (board[0][j] == board[1][j] && board[1][j] == board[2][j] &&
          board[0][j] != '.') {
        winner = board[0][j];
        break;
      }
    }
  }

  // Check Diagonals (Diagonal Wins)
  if (winner == '\0') {
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
        board[0][0] != '.') {
      winner = board[0][0];
    }
  }

  if (winner == '\0') {
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
        board[0][2] != '.') {
      winner = board[0][2];
    }
  }

  // Print Final Result
  if (winner == 'X') {
    cout << "Result: Player X wins!" << endl;
  } else if (winner == 'O') {
    cout << "Result: Player O wins!" << endl;
  } else {
    cout << "Result: No winner (game ongoing or draw)." << endl;
  }

  return 0;
}
