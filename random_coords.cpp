#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(nullptr));
  int x{0}, y{0}, z{0};
  x = rand() % -10;
  y = rand() % -10;
  z = rand() % -10;
  double distance{sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2))};

  cout << "Final coordinate" << distance;
}
