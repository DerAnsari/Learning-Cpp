#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
  srand(static_cast<unsigned int>(time(nullptr)));

  constexpr int RECOVERTIME{5};

  int width{0}, height{0};
  cout << "Enter Grid width and height: ";
  cin >> width >> height;

  // Making the default grid
  int grid[100][100]{};
  for (int i{0}; i < height; i++) {
    for (int j{0}; j < width; j++) {
      grid[i][j] = 0;
    }
  }

  int infected{0};
  cout << "Enter the number of Infected Individual";
  cin >> infected;
  while (infected < 0 || infected > width * height) {
    cout << "Invalid number must be under 10000: ";
    cin >> infected;
  }

  // Place Infected Individual
  int count{0}, severityLevel{0};
  while (count < infected) {
    int rowRandom{rand() % height};
    int colRandom{rand() % width};
    if (grid[rowRandom][colRandom] == 0) {
      severityLevel = rand() % 9 + 1;
      grid[rowRandom][colRandom] = severityLevel;
      count++;
    }
  }

  double infectedProbability{0.0}, worseningProbability{0.0};
  cout << "Enter Infected Probability (0 - 1): ";
  cin >> infectedProbability;
  while (infectedProbability < 0 || infectedProbability > 1) {
    cout << "Invalid number must be within 0 and 1: ";
    cin >> infectedProbability;
  }

  cout << "Enter Worsening Probability (0 - 1): ";
  cin >> worseningProbability;
  while (worseningProbability < 0 || worseningProbability > 1) {
    cout << "Invalid number must be within 0 and 1: ";
    cin >> worseningProbability;
  }

  // Give Initial
  cout << "Initial Grid State: " << endl;
  for (int i{0}; i < height; i++) {
    for (int j{0}; j < width; j++) {
      if (grid[i][j] == 0) {
        cout << ".";
      } else {
        cout << grid[i][j];
      }
    }
    cout << endl;
  }

  // Start Simulation Here Onwards....
  int infectionDays[100][100]{};
  double infectionP{0.0}, worseningP{0.0};
  int health{0}, recovered{0}, dead{0}, maxInfected{0};

  for (int i{1}; i <= 30; i++) {

    int tempGrid[100][100];
    int tempDays[100][100];

    // Copy current grid to temp
    for (int row = 0; row < height; row++) {
      for (int col = 0; col < width; col++) {
        tempGrid[row][col] = grid[row][col];
        tempDays[row][col] = infectionDays[row][col];
      }
    }

    health = 0;
    recovered = 0;
    dead = 0;
    infected = 0;

    for (int j{0}; j < height; j++) {
      for (int k{0}; k < width; k++) {

        if (grid[j][k] == 0) {
          maxInfected = 0;
          // Check how many infected in proximity and error handling
          if (j != 0) {
            if (grid[j - 1][k] >= 1 && grid[j - 1][k] <= 9) {
              infectionP = static_cast<double>(rand()) / RAND_MAX;
              if (infectionP <= infectedProbability) {
                if (grid[j - 1][k] > maxInfected) {
                  maxInfected = grid[j - 1][k];
                }
              }
            }
          }

          if (j != (height - 1)) {
            if (grid[j + 1][k] >= 1 && grid[j + 1][k] <= 9) {
              infectionP = static_cast<double>(rand()) / RAND_MAX;
              if (infectionP <= infectedProbability) {
                if (grid[j + 1][k] > maxInfected) {
                  maxInfected = grid[j + 1][k];
                }
              }
            }
          }

          if (k != 0) {
            if (grid[j][k - 1] >= 1 && grid[j][k - 1] <= 9) {
              infectionP = static_cast<double>(rand()) / RAND_MAX;
              if (infectionP <= infectedProbability) {
                if (grid[j][k - 1] > maxInfected) {
                  maxInfected = grid[j][k - 1];
                }
              }
            }
          }

          if (k != (width - 1)) {
            if (grid[j][k + 1] >= 1 && grid[j][k + 1] <= 9) {
              infectionP = static_cast<double>(rand()) / RAND_MAX;
              if (infectionP <= infectedProbability) {
                if (grid[j][k + 1] > maxInfected) {
                  maxInfected = grid[j][k + 1];
                }
              }
            }
          }

          // Infecting the Individual
          if (maxInfected != 0) {
            tempGrid[j][k] = rand() % maxInfected + 1;
            tempDays[j][k] = 0;
          }

        } else if (grid[j][k] >= 1 && grid[j][k] <= 9) {
          tempDays[j][k] = infectionDays[j][k] + 1;

          if (tempDays[j][k] >= RECOVERTIME) {
            tempGrid[j][k] = -1;
            tempDays[j][k] = 0;
          } else {
            worseningP = static_cast<double>(rand()) / RAND_MAX;
            if (worseningP <= worseningProbability) {
              if (grid[j][k] < 9) {
                tempGrid[j][k] = grid[j][k] + 1;
              } else {
                tempGrid[j][k] = 10;
                tempDays[j][k] = 0;
              }
            } else {

              if (grid[j][k] > 1) {
                tempGrid[j][k] = grid[j][k] - 1;
              }
            }
          }
        }
      }
    }

    // Copy tempGrid back to grid after all updates
    for (int row = 0; row < height; row++) {
      for (int col = 0; col < width; col++) {
        grid[row][col] = tempGrid[row][col];
        infectionDays[row][col] = tempDays[row][col];
      }
    }

    // Count all the stats
    for (int i{0}; i < height; i++) {
      for (int j{0}; j < width; j++) {
        if (grid[i][j] == 0) {
          health++;
        } else if (grid[i][j] >= 1 && grid[i][j] <= 9) {
          infected++;
        } else if (grid[i][j] == -1) {
          recovered++;
        } else if (grid[i][j] == 10) {
          dead++;
        }
      }
    }
    cout << "Day " << i << ": Healthy: " << health << ", Infected: " << infected
         << ", Recovered: " << recovered << ", Dead: " << dead << endl;
  }

  // Print final grid
  cout << "Final grid state:" << endl;
  for (int i{0}; i < height; i++) {
    for (int j{0}; j < width; j++) {
      if (grid[i][j] == 0) {
        cout << ".";
      } else if (grid[i][j] == -1) {
        cout << "R";
      } else if (grid[i][j] == 10) {
        cout << "X";
      } else {
        cout << grid[i][j];
      }
    }
    cout << endl;
  }

  return 0;
}
