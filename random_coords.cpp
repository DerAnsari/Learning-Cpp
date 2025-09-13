#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(nullptr));
  int x, y, z{rand() % -10};
  double distance{sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2))};

  cout << "Final coordinate" << distance;
}
