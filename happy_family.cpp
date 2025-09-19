#include <cstdlib>
#include <ctime>
#include <iostream>

using std::srand, std::cout, std::rand;

int main() {
  srand(time(0));
  int num{50};
  int Children{0};

  for (int count{0}; count < num; count++) {

    bool Boys{false}, Girls{false};

    while (!(Boys && Girls)) {
      int child = rand() % 2;
      if (child == 0) {
        Boys = true;
      } else {
        Girls = true;
      }
      Children++;
    }
  }
  double averageFam = static_cast<double>(Children) / static_cast<double>(num);

  cout << Children;
  cout << "\n Average children per family: " << averageFam;
}
